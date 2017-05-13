#include "item.h"

item::item(string keyword, int c)
{
    key = keyword;
    code=c;
    next = 0;
}

string item::getKey()
{
    return key;
}

int item::getCode()
{
        return code;
}

item::~item()
{
    //dtor
}
