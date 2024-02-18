#ifndef REQUERIMIENTOS_H
#define REQUERIMIENTOS_H

#include "lista_expresion.h"
#include "lista_string.h"

void atomic(listaString comando, listaExpresiones &exp);
void compound(listaString comando, listaExpresiones &exp);
void show(listaString comando, listaExpresiones exp);
void evaluate(listaString comando, listaExpresiones exp);
void save(listaString comando, listaExpresiones &exp);
void load(listaString comando, listaExpresiones &exp);
void exit(listaString comando, listaExpresiones &exp);

#endif
