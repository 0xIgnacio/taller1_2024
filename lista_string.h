#ifndef LISTA_STRING_H_INCLUDED
#define LISTA_STRING_H_INCLUDED

#include "string.h"

typedef struct nodoS {
  string data;
  nodoS * sig;
};
typedef nodoS * listaString;

void crear(listaString &root);
void destruir(listaString &root);
void insertar(listaString &root);
void buscar(listaString root, string data);
void largo(listaString root);
void esVacia(listaString root);

#endif // LISTA_STRING_H_INCLUDED