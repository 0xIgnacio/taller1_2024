#ifndef REQUERIMIENTO_H_INCLUDED
#define REQUERIMIENTO_H_INCLUDED

#include "lista_expresiones.h"
#include "lista_string.h"

// EJECUCION
void atomic(lista_string lStr, lista_expresiones &lExp);
void compoundNot(lista_string lStr, lista_expresiones &lExp);
void compound(lista_string lStr, lista_expresiones &lExp);
void evaluate(lista_string lStr, lista_expresiones lExp);
void show(lista_string lStr, lista_expresiones lExp);
void save(lista_string lStr, lista_expresiones lExp);
void load(lista_string lStr, lista_expresiones &lExp);
void ejecutarExit(lista_string lStr);

// VALIDACION
boolean validarOperador(string s);
boolean validarAtomic(lista_string lStr);
boolean validarCompoundNot(lista_string lStr, lista_expresiones lExp);
boolean validarCompound(lista_string lStr, lista_expresiones lExp);
boolean validarEvaluate(lista_string lStr, lista_expresiones lExp);
boolean validarShow(lista_string lStr, lista_expresiones lExp);
boolean validarSave(lista_string lStr, lista_expresiones lExp);
boolean validarLoad(lista_string lStr, lista_expresiones lExp);

// ARCHIVO
boolean existeArchivo(string s);

#endif // REQUERIMIENTO_H_INCLUDED
