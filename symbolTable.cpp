#include <stdio.h>
#include "symbolTable.h"
#include <string.h>
#include <fstream>
#include <iostream>  
#include<sstream>
#include <iterator>

using std::cout; using std::endl;
using std::string; using std::hex;
using std::stringstream;

void print_test(int type)
{
    printf("Hello World! %d\n", type);
}

void initialize()
{
    symbolTable = fopen("Symbol Table.txt", "w");
    errors = fopen("Semantic Errors.txt", "w");
    quad = fopen("Quad.txt", "w");
    scopesParents[0] = -1;
}

// Triples
void triples(string opType, string src, string dest){
    ofstream outfile;
    outfile.open("Quad.txt", std::ios::app);
    outfile<<opType<<" \t"<<src<<" \t"<<dest<<"\n";
}

// Quadruples
void quadruples(string opType, string src1, string src2, string dest){
    ofstream outfile;
    outfile.open("Quad.txt", std::ios::app);
    outfile<<opType<<" \t"<<src1<<" \t"<<src2<<" \t"<<dest<<"\n";
}

// generate a new register 
string getRegister(){
  return "R" + to_string(reg++);
}


bool checkType(int type1, int type2, struct value Value)
{
    if (type1 == type2)
        return true;
    else
    {

        if (type1 == FLOAT_VAL && type2 == INT_VAL)
        {
            Value.floatValue = Value.intValue;
            return true;
        }

        return false;
    }
}

string getValue(struct value Value)
{
    if (Value.type == INT_VAL)
        return to_string(Value.intValue);
    else if (Value.type == FLOAT_VAL)
        return to_string(Value.floatValue);
    else if (Value.type == CHAR_VAL)
        return to_string((Value.charValue));
    else if (Value.type == STRING_VAL)
        return Value.stringValue;
    else if (Value.type == BOOL_VAL)
        return Value.boolValue ? "true" : "false";
    else
        return "";
}

string stringToHex(string s1){
    stringstream ss;
    string s2 = s1.substr(1, s1.size() - 2);
    for (const auto &item : s2) {
        ss << hex << int(item);
    }
    return ss.str();
}

string getRegValue(struct value Value)
{

    if (Value.type == INT_VAL)
        return to_string(Value.intValue);
    else if (Value.type == FLOAT_VAL)
        return to_string(Value.floatValue);
    else if (Value.type == CHAR_VAL)
        return to_string((int)Value.charValue);
    else if (Value.type == STRING_VAL)
        return stringToHex( Value.stringValue);
    else if (Value.type == BOOL_VAL)
        return Value.boolValue ? "1" : "0";
    else
        return "";
}



pair<bool, int> checkAlreadyDeclared(char *VarName, int scope)
{
    pair<string, int> key(VarName, scope);
    if (symbols.find(key) != symbols.end())
    {
        return make_pair(true, symbols[key]->line);
    }
    else
    {
        return make_pair(false, -1);
    }
}

int createEntry(struct value Value, bool isConst, int declarationType,
                bool isInit, bool isUsed, int line)
{
    char *VarName = Value.varName;
    // int is line number
    pair<bool, int> alreadyDeclared = checkAlreadyDeclared(VarName, currentScope);
    if (!alreadyDeclared.first)
    {

        if (checkType(declarationType, Value.type, Value))
        {
            symbolTableEntry *newNode = new symbolTableEntry();
            newNode->name = VarName;
            newNode->isConst = isConst;
            newNode->type = declarationType;
            newNode->Value = Value;
            newNode->isInit = isInit;
            newNode->isUsed = isUsed;
            newNode->line = line;
            newNode->scope = currentScope;
            symbols[make_pair((string)VarName, currentScope)] = newNode;
            string reg = getRegister();
            triples("MOV", getRegValue(Value), reg );
            triples("MOV", reg, VarName);
            printSymbol(newNode);
            return 0;
        }
        else
        {
            ofstream outfile;
            outfile.open("Semantic Errors.txt", std::ios::app);
            outfile << "Error: Type mismatch in line " << line << endl;
            return 1;
        }
    }
    else
    {
        ofstream outfile;
        outfile.open("Semantic Errors.txt", std::ios::app);
        outfile << "Error: Variable " << VarName << " already declared at line " << alreadyDeclared.second << endl;
        return 1;
    }
}

int updateEntry(struct value Value, int line)
{
    char *VarName = Value.varName;
    int scope = currentScope;
    pair<string, int> key(VarName, scope);
    map<pair<string, int>, symbolTableEntry *>::iterator it = symbols.find(key);
    while (scope > -1 && it == symbols.end())
    {
        scope = scopesParents[scope];
        key = make_pair(VarName, scope);
        it = symbols.find(key);
    }
    if (scope > -1)
    {
        if (checkType(it->second->type, Value.type, Value))
        {
            if (!it->second->isConst)
            {
                it->second->Value = Value;
                it->second->isInit = true;
                it->second->isUsed = true;
                it->second->line = line;
                printSymbol(it->second);
                string reg = getRegister();
                triples("MOV", getRegValue(Value), reg );
                triples("MOV", reg, VarName);

                return 0;
            }
            else
            {
                ofstream outfile;
                outfile.open("Semantic Errors.txt", std::ios::app);
                outfile << "Error: Variable " << VarName << " is declared constant at line " << it->second->line << endl;
                return 1;
            }
        }
        else
        {
            ofstream outfile;
            outfile.open("Semantic Errors.txt", std::ios::app);
            outfile << "Error: Type mismatch in line " << line << endl;
            return 1;
        }
    }
    else
    {
        ofstream outfile;
        outfile.open("Semantic Errors.txt", std::ios::app);
        outfile << "Error: Variable " << VarName << " not declared at line " << line << endl;
        return 1;
    }
}


void printSymbol(symbolTableEntry *symbol)
{
    printf("Var Name: %s\n", symbol->name);
    printf("is Const: %d\n", symbol->isConst);
    printf("Type: %d\n", symbol->type);
    printf("Value: %s\n", getValue(symbol->Value));
    printf("Is Init: %d\n", symbol->isInit);
    printf("Is Used: %d\n", symbol->isUsed);
    printf("Line: %d\n", symbol->line);
    return;
}

string getType(int type)
{
    return type == 0 ? "INT" : type == 1 ? "FLOAT"
                            : type == 2   ? "CHAR"
                            : type == 3   ? "STRING"
                            : type == 4   ? "BOOL"
                                         : "";
}

void writeSymbolTable(map<pair<string, int>, symbolTableEntry *> symbolsMap)
{

    ofstream outfile;
    outfile.open("Symbol Table.txt", std::ios::app);
    outfile << "Var Name   Is Const   Type   Value   Is Init   Is Used   Line  Scope\n";
    for (auto it = symbolsMap.begin(); it != symbolsMap.end(); ++it)
    {

        if (!it->second->isInit)
        {
            ofstream outfile;
            outfile.open("Semantic Errors.txt", std::ios::app);
            outfile << "Warning: Variable " << it->first.first << " is not initialized" << endl;
        }

        outfile << it->first.first << "         " << it->second->isConst << "           "
                << getType(it->second->type) << "     " << getValue(it->second->Value)
                << "      " << it->second->isInit << "         " << it->second->isUsed << "         " << it->second->line << "    " << it->second->scope << endl;
    }
    outfile.close();
}

void openBracket()
{
    lastScope++;
    currentScope = lastScope;
    scopesParents[currentScope] = parent;
    parent = currentScope;
}

void closeBracket()
{
    currentScope = scopesParents[currentScope];
    parent = currentScope;
}

