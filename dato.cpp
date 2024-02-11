#include "dato.h"

bool esParentesis(tipo data) {
	return data == par;
}

bool esValor(tipo data) {
	return data == val;
}

bool esOperador(tipo data) {
	return data == op;
}
