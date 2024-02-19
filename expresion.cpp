#include "expresion.h"
#include "abb_expresion.h"

void crear(expresion &exp, int identificador, abbExpresion abb) {
	exp.identificador = identificador;
	exp.arbol = abb;
}

void destruir(expresion &exp) {

}

void setIdentificador(expresion &exp, int num) {
	exp.identificador = num;
}

void setArbol(expresion &exp, abbExpresion abb) {
	exp.arbol = abb;
}

int getIdentificador(expresion exp) {
	return exp.identificador;
}

abbExpresion getArbol(const expresion exp) {
	return exp.arbol;
}
