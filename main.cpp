#include "hashtable.h"

hashtable *casillero;

int main()
{
    casillero = new hashtable(0);

    //AÑADIMOS ELEMENTOS A LA TABLA
    casillero->insertar("perro",5);
    cout<<casillero->hashear("perro")<<endl;
    casillero->insertar("gato",0);
    cout<<casillero->hashear("gato")<<endl;
    casillero->insertar("tortuga",10);
    cout<<casillero->hashear("tortuga")<<endl;
    casillero->insertar("loro",3);
    cout<<casillero->hashear("loro")<<endl;
        casillero->insertar("lagarto",3);
    cout<<casillero->hashear("lagarto")<<endl;

    //HACEMOS ALGUNAS PRUEBAS BUSCANDO ELEMENTOS
    item *i = casillero->buscar("gato");
    if(i!=0) cout<<"valor de la clave gato es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;

    i = casillero->buscar("tortuga");
    if(i!=0) cout<<"valor de la clave tortuga es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;

    //BUSCAMOS UNO QUE NO EXISTA
    i = casillero->buscar("ardilla");
    if(i!=0) cout<<"valor de la clave ardilla es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;


    /*DESPUES DE BORRAR UN ELEMENTO QUE ESTABA
    EN LA MISMA LISTA*/
    casillero->eliminar("gato");
    i = casillero->buscar("gato");
    if(i!=0) cout<<"valor de la clave gato es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;

    //TORTUGA SE MOVIO CORRECTAMENTE
     i = casillero->buscar("tortuga");
    if(i!=0) cout<<"valor de la clave tortuga es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;

    /*BORRAMOS EL ULTIMO ELEMENTO EN LA LISTA DONDE
    SE REPETIAN PARA PROBAR QUE LA LISTA QUEDE VACIA SIN
    PROBLEMAS */
    casillero->eliminar("tortuga");
    i = casillero->buscar("tortuga");
    if(i!=0) cout<<"valor de la clave tortuga es: "<<i->getCode()<<endl;
    else cout<<"no se encontro"<<endl;


    return 0;
}
