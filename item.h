#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

class item
{
    public:
        item(string keyword, int);
        string getKey();
        int getCode();
        virtual ~item();

        item *next;

    private:
        string key;
        int code;
};

#endif // ITEM_H
