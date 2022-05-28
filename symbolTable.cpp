#include <stdio.h>
#include "symbolTable.h"
#include <string.h>
#include <fstream>
void print_test(int type)
{
    printf("Hello World! %d\n", type);
}

int createEntry(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line)
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


