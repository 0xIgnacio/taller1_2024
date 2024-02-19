#ifndef OPERADOR_H
#define OPERADOR_H

typedef enum {AND, OR, NOT} operador;

// Funciones verificadoras
bool esAnd(operador data);
bool esOr(operador data);
bool esNot(operador data);

// Funciones base
void cargar(operador &data);
void mostrar(const operador data);

#endif