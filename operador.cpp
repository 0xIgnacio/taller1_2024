#include "./headers/operador.h"
#include <stdio.h>

// GETTER

// SETTER

// BASE
void cargar(operador &data, operador op) {
  data = op;
}

void mostrar(operador data) {
  printf("%s", (data == AND ? "AND" : data == OR ? "OR" : "NOT"));
}