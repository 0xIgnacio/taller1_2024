#include "lista_expresion.h"
#include "expresion.h"

void setData(nodoE *root, expresion data) {
	root->data = data;
}

expresion getData(nodoE *root) {
	return root->data;
}
