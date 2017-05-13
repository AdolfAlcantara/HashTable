#include "listaenlazada.h"

ListaEnlazada::ListaEnlazada()
{
    head =0;
}

bool ListaEnlazada::addItem(item*i)
{
    if(head==0){
        head = i;
    }else{
        item* temp = head;
        while(temp->next!=0){
            temp  = temp->next;
        }
        temp->next = i;
    }
    return true;
}

bool ListaEnlazada::deleteItem(string word)
{
    if(lookFor(word)!=0){
        if(head->getKey()==word){
            head = head->next;
        }else{
            item *temp = head;
            while(temp->next!=0){
                    if(temp->next->getKey()==word){
                        temp->next=temp->next->next;
                        return true;
                    }else{
                        temp = temp->next;
                    }
            }
        }
    }else{
        return false;
    }
}

item* ListaEnlazada::lookFor(string word)
{
    item *temp = head;
    while(temp!=0){
        if(temp->getKey()==word){
            return temp;
        }else{
            temp = temp->next;
        }
    }
    return NULL;
}

ListaEnlazada::~ListaEnlazada()
{
    //dtor
}
