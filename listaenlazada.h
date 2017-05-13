#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "item.h"

class ListaEnlazada
{
    public:
        ListaEnlazada();
        item getHead();

        bool addItem(item*i);
        bool deleteItem(string word);
        item* lookFor(string word);
        virtual ~ListaEnlazada();

    private:
        item *head;

};

#endif // LISTAENLAZADA_H
