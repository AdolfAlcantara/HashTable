#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "listaenlazada.h"


class hashtable
{
    public:

        hashtable(int);
        bool insertar(string, int);
        item *buscar(string);
        bool eliminar(string);

        int getTamano();
        void setTamano(int);

        int hashear(string);

        virtual ~hashtable();


    private:
        ListaEnlazada *tabla;

        int tamano;

};

#endif // HASHTABLE_H
