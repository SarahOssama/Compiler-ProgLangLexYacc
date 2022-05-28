#include <iostream>
#include <map>
#include <string>
using namespace std;

// #define INT_VAL 1
// #define FLOAT_VAL 2
// #define CHAR_VAL 3
// #define STRING_VAL 4
// #define BOOL_VAL 5

enum type {
    INT_VAL,
    FLOAT_VAL,
    CHAR_VAL,
    STRING_VAL,
    BOOL_VAL
};

int type_val = -1;

class symbolTableEntry
{
public:
    char *name;
    bool isConst;
    int type;
    int Value;
    bool isInit;
    bool isUsed;
    int line;
    int scope;
};
map<string, symbolTableEntry*> symbols;

string getType(int type);

int createEntry(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line);

void printSymbol(symbolTableEntry *symbol);
