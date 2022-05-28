#include <stdio.h>
#include "symbolTable.h"
#include <string.h>
#include <fstream>

void print_test(int type)
{
    printf("Hello World! %d\n", type);
}

void initialize()
{
    symbolTable = fopen("symbolTable.txt", "w");
    errors = fopen("errors.txt", "w");
}

bool checkType(int type1, int type2)
{
    if (type1 == type2)
        return true;
    else
        return false;
}

pair<bool, int> checkAlreadyDeclared(char *VarName)
{
    map<string, symbolTableEntry *>::iterator it = symbols.find(VarName);
    if (it != symbols.end())
    {
        return make_pair(true, it->second->line);
    }
    return make_pair(false, 0);
}

int createEntry(struct value Value, bool isConst, int declarationType,
                bool isInit, bool isUsed, int line)
{
    char *VarName = Value.varName;

    // int is line number
    pair<bool, int> alreadyDeclared = checkAlreadyDeclared(VarName);
    if (!alreadyDeclared.first)
    {

        if (checkType(declarationType, Value.type))
        {
            symbolTableEntry *newNode = new symbolTableEntry();
            newNode->name = VarName;
            newNode->isConst = isConst;
            newNode->type = declarationType;
            newNode->Value = Value;
            newNode->isInit = isInit;
            newNode->isUsed = isUsed;
            newNode->line = line;
            string temp = VarName;
            symbols[temp] = newNode;

        
            printSymbol(newNode);
            return 0;
        }
        else
        {
            ofstream outfile;
            outfile.open("errors.txt", std::ios::app);
            outfile << "Error: Type mismatch in line " << line << endl;
            return 1;
        }
    }
    else
    {
        ofstream outfile;
        outfile.open("errors.txt", std::ios::app);
        outfile << "Error: Variable " << VarName << " already declared at line " << alreadyDeclared.second << endl;
        return 1;
    }
}

int updateEntry(struct value Value, int line)
{
    char *VarName = Value.varName;
    map<string, symbolTableEntry *>::iterator it = symbols.find(VarName);
    if (it != symbols.end())
    {
        if (checkType(it->second->type, Value.type))
        {
            if (!it->second->isConst)
            {
                it->second->Value = Value;
                it->second->isInit = true;
                it->second->isUsed = true;
                it->second->line = line;
                printSymbol(it->second);
                return 0;
            }
            else
            {
                ofstream outfile;
                outfile.open("errors.txt", std::ios::app);
                outfile << "Error: Variable " << VarName << " is declared constant at line " << it->second->line << endl;
                return 1;
            }
        }
        else
        {
            ofstream outfile;
            outfile.open("errors.txt", std::ios::app);
            outfile << "Error: Type mismatch in line " << line << endl;
            return 1;
        }
    }
    else
    {
        ofstream outfile;
        outfile.open("errors.txt", std::ios::app);
        outfile << "Error: Variable " << VarName << " not declared at line " << line << endl;
        return 1;
    }
}

string getValue(struct value Value)
{
    if (Value.type == INT_VAL)
        return to_string(Value.intValue);
    else if (Value.type == FLOAT_VAL)
        return to_string(Value.floatValue);
    else if (Value.type == CHAR_VAL)
        return to_string(Value.charValue);
    else if (Value.type == STRING_VAL)
        return Value.stringValue;
    else if (Value.type == BOOL_VAL)
        return Value.boolValue ? "true" : "false";
    else
        return "";
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

void writeSymbolTable(map<string, symbolTableEntry *> symbolsMap)
{

    ofstream outfile;
    outfile.open("symbolTable.txt", std::ios::app);
    outfile << "Var Name   Is Const   Type   Value   Is Init   Is Used   Line\n";
    for (auto it = symbolsMap.begin(); it != symbolsMap.end(); ++it)
    {

        if(!it->second->isInit)
        {
            ofstream outfile;
                outfile.open("errors.txt", std::ios::app);
                outfile << "Warning: Variable " << it->first <<" is not initialized" << endl;
        }


        outfile << it->first << "         " << it->second->isConst << "           "
                << getType(it->second->type) << "     " << getValue(it->second->Value) << "      " << it->second->isInit << "         " << it->second->isUsed << "         " << it->second->line << endl;
    }
    outfile.close();
}
