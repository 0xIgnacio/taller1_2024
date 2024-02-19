#include "lista_string.h"
#include "string.h"

void crear(listaString &root) {
	root = nullptr;
}

void destruir(listaString &root) {
	if (root != nullptr) {
		destruir(root->sig);
		delete root;
	}
}

void insertar(listaString &root, string data) {
	listaString rootAux = root; // Auxiliar para recorrer la lista

	nodoS * nuevo = new nodoS; // Creo el nuevo nodo con la información a insertar
	nuevo->data = data;
	nuevo->sig = nullptr;

	if (root == nullptr) // Si la lista no tiene nada asigno nuevo como raíz
		root = nuevo;
	else { // Sino recorro hasta el final con el auxiliar e inserto
		while (rootAux->sig != nullptr)
			rootAux = rootAux->sig;
		rootAux->sig = nuevo;
	}
}

nodoS * buscar(listaString root, string data) {
	if (root != nullptr)
		if (getData(root) == data)
			return root;
		else return buscar(root->sig, data);
	else return nullptr;
}

int largo(listaString root) {
	if (root != nullptr)
		return largo(root->sig) + 1;
	else return 0;
}

bool esVacia(listaString root) {
	return root == nullptr;
}

void crearComando(string comando, listaString &root) {
	string palabra;
  int i = 0;

  while (comando[i] != '\0') {
    while (comando[i] == ' ' && comando[i] != '\0')
    	i++;

    int j = 0;
    while (comando[i + j] != ' ' && comando[i + j] != '\0')
	    j++;

    if (j > 0) {
      for (int k = 0; k < j; k++)
	      palabra[k] = comando[i + k];
      palabra[j+1] = '\0';

      if (root == nullptr) {
        nodoS * nodoAux = new nodoS;
        nodoAux->data = palabra;
        nodoAux->sig = nullptr;
        root = nodoAux;
      } else insertar(root, palabra);
    }

    i += j;
  }
}

string getData(listaString root) {
	return root->data;
}
