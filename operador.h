#ifndef OPERADOR_H
#define OPERADOR_H

typedef enum {NOT, AND, OR} operador;

bool esNot(operador data);
bool esAnd(operador data);
bool esOr(operador data);

#endif
