#include <stdio.h>
#include "symbolTable.h"
#include <string.h>
#include <fstream>
void print_test(int type)
{
    printf("Hello World! %d\n", type);
}

int initiateINT(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line)
{
    symbolNode *newNode = new symbolNode();
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

void printSymbol(symbolNode *symbol)
{
    printf(" var name: %s\n", symbol->name);
    printf(" isConst: %d\n", symbol->isConst);
    printf(" type: %d\n", symbol->type);
    printf(" Value: %d\n", symbol->Value);
    printf(" isInit: %d\n", symbol->isInit);
    printf(" isUsed: %d\n", symbol->isUsed);
    printf(" line: %d\n", symbol->line);
    return;
}

void writeSymbolTable(map<std::string, symbolNode *> symbolsMap)
{
    ofstream outfile;
    outfile.open("symbolTable.txt",std::ios::app);
    for (auto it = symbolsMap.begin(); it != symbolsMap.end(); ++it)
    {
        outfile << it->first << " " << it->second->isConst << " " << it->second->type << " " << it->second->Value << " " << it->second->isInit << " " << it->second->isUsed << " " << it->second->line << endl;
    }
    outfile.close();
}