#ifndef LISTA_STRING_H_INCLUDED
#define LISTA_STRING_H_INCLUDED

#include "string.h"

typedef struct _nodoS {
    string str;
    _nodoS *sig;
} nodoS;
typedef nodoS * lista_string;

// BASE
void crear(lista_string &lStr);
void destruir(lista_string &lstr);
void mostrar(lista_string lStr);
void insBack(lista_string &lista,string s);
int largo(lista_string lStr);

// REQUERIMIENTOS
void comandoALista(string original, lista_string &lstr);

#endif // LISTA_STRING_H_INCLUDED
