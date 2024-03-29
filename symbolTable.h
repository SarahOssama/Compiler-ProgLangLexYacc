#include <iostream>
#include <map>
#include <string>
using namespace std;

// #define INT_VAL 1
// #define FLOAT_VAL 2
// #define CHAR_VAL 3
// #define STRING_VAL 4
// #define BOOL_VAL 5

FILE *errors;
FILE *symbolTable;
FILE *quad;

struct value
{
    int intValue;
    char charValue;
    char *stringValue;
    float floatValue;
    bool boolValue;
    char *varName;
    int type;
};

enum type
{
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
    struct value Value;
    bool isInit;
    bool isUsed;
    int line;
    int scope;
};

int scopesParents[100];
int parent = 0;
int currentScope = 0;
int lastScope = 0;
int val = 0;
// String is var name
// int is scope

int reg = 0;
map<pair<string, int>, symbolTableEntry *> symbols;

void initialize();

void openBracket();

string getType(int type);

int createEntry(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line);

void printSymbol(symbolTableEntry *symbol);

void triples(string opType, string src, string dest);

void quadruples(string opType, string src1, string src2, string dest);

string getRegister();

string getRegValue(struct value Value);
string stringToHex(string s1);
symbolTableEntry *returnVal(char *VarName);