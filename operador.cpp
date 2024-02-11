#include "operador.h"

bool esNot(operador data) {
	return data == NOT;
}

bool esAnd(operador data) {
	return data == AND;
}

bool esOr(operador data) {
	return data == OR;
}
