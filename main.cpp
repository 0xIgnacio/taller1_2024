#include "./headers/requerimiento.h"
#include <stdio.h>

int main() {
  // true AND false

  datos d1;
  d1.disc = va;
  d1.info.va = false;

  datos d2;
  d2.disc = op;
  d2.info.op = AND;

  datos d3;
  d3.disc = va;
  d3.info.va = true;
  
  abb a1;
  crear(a1);
  abb a2;
  crear(a2);
  abb a3;
  crear(a3);

  insertar(a1, d1);
  insertar(a3, d3);
  insertar(a2, a1, a3, d2);

  mostrar(a2);
  printf("%s", evaluar(a2) ? "true" : "false");

  return 0;
}