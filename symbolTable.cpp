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
    map<string, symbolTableEntry*>::iterator it = symbols.find(VarName);
    if (it != symbols.end())
    {
        return make_pair(true,it->second->line);
    }
    return make_pair(false, 0);
}

int createEntry(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line)
{
    pair<bool, int> alreadyDeclared = checkAlreadyDeclared(VarName);
    if(!alreadyDeclared.first)
    {
        symbolTableEntry *newNode = new symbolTableEntry();
        newNode->name = VarName;
        newNode->isConst = isConst;
        newNode->type = type;
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
        outfile.open("errors.txt",std::ios::app);
        outfile << "Error: Variable " << VarName <<" already declared at line "<< alreadyDeclared.second << endl;
        return 1;
    }
}

void printSymbol(symbolTableEntry *symbol)
{
    printf("Var Name: %s\n", symbol->name);
    printf("is Const: %d\n", symbol->isConst);
    printf("Type: %d\n", symbol->type);
    printf("Value: %d\n", symbol->Value);
    printf("Is Init: %d\n", symbol->isInit);
    printf("Is Used: %d\n", symbol->isUsed);
    printf("Line: %d\n", symbol->line);
    return;
}

string getType(int type)
{
    return type == 0 ? "INT":
    type == 1 ? "FLOAT":
    type == 2? "CHAR":
    type == 3? "STRING":
    type == 4? "BOOL": "";
}

void writeSymbolTable(map<string, symbolTableEntry *> symbolsMap)
{
    ofstream outfile;
    outfile.open("symbolTable.txt",std::ios::app);
    outfile << "Var Name   Is Const   Type   Value   Is Init   Is Used   Line\n";
    for (auto it = symbolsMap.begin(); it != symbolsMap.end(); ++it)
    {
        outfile << it->first << "         " << it->second->isConst << "           " 
        << getType(it->second->type) << "     " << it->second->Value << "      " << it->second->isInit <<
        "         " << it->second->isUsed << "         " << it->second->line << endl;
    }
    outfile.close();
}


