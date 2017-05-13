#include "hashtable.h"

hashtable::hashtable(int tamanotabla)
{
    if(tamanotabla<=0) tamanotabla=10;
    tabla = new ListaEnlazada[tamanotabla];
    tamano = tamanotabla;
}

int hashtable::hashear(string word)
{
    int value =0;
    for(int i=0;i<word.length();i++){
        value+=word[i];
    }
    return ((value*word.length())%tamano);
}


void hashtable::setTamano(int t)
{
        tamano = t;
}

int hashtable::getTamano()
{
    return tamano;
}


bool hashtable::insertar(string word, int code)
{
    int posicion = hashear(word);
    return tabla[posicion].addItem(new item(word,code));
}

item* hashtable::buscar(string word)
{
    int posicion = hashear(word);
    return tabla[posicion].lookFor(word);

}

bool hashtable::eliminar(string word)
{
    int posicion  = hashear(word);
    return tabla[posicion].deleteItem(word);
}





hashtable::~hashtable()
{
    //dtor
}
