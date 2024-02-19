#ifndef LISTA_STRING_H
#define LISTA_STRING_H

#include "string.h"

typedef struct _nodoS {
  string data;
  _nodoS * sig;
} nodoS;
typedef nodoS * listaString;

// Funciones base
void crear(listaString &root);
void destruir(listaString &root);
void insertar(listaString &root, string data);
nodoS * buscar(listaString root, string data);
int largo(listaString root);
bool esVacia(listaString root);

// Requerimientos
void crearComando(string comando, listaString &root);

// Get atributos
string getData(listaString root);

#endif
