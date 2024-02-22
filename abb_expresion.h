#ifndef ABB_EXPRESION_H
#define ABB_EXPRESION_H

#include "datos_arbol.h"

typedef struct _nodoA {
  datos info;
  _nodoA * izq;
  _nodoA * der;
};
typedef _nodoA * abb;

// Funciones base
void crear(abb &arbol);
void insertar(abb &arbol, datos info);
void mostrar(abb arbol);
bool esVacio(abb arbol);
bool hijoIzqVacio(abb arbol);
bool hijoDerVacio(abb arbol);

// GETTER
datos getDatos(abb arbol);


#endif