#include <iostream>
#include <map>
#include <string>
using namespace std;

#define INT_VAL 1
#define FLOAT_VAL 2
#define CHAR_VAL 3
#define STRING_VAL 4
#define BOOL_VAL 5

int type_val = -1;

class symbolNode
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
map<std::string, symbolNode *> symbols;

int initiateINT(char *VarName, bool isConst, int type, int Value, bool isInit, bool isUsed, int line);

void printSymbol(symbolNode *symbol);
