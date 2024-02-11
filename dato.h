#ifndef DATO_H
#define DATO_H

typedef enum {par, val, op} tipo;

// Identificadores
bool esParentesis(tipo data);
bool esValor(tipo data);
bool esOperador(tipo data);

#endif
