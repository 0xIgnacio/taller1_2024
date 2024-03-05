#include <stdio.h>
#include "lista_string.h"

// BASE
void crear(lista_string &lStr) {
    lStr = nullptr;
}

void destruir(lista_string &lstr) {
    while (lstr != nullptr) {
        lista_string aux = lstr;
        lstr = aux->sig;
        delete aux;
    }
}

void mostrar(lista_string lStr) {
    while (lStr != nullptr) {
        printf("\n");
        print(lStr->str);
        lStr = lStr->sig;
    }
}

void insBack(lista_string &lista, string s) {
    if (lista == nullptr){
        lista = new nodoS;
        strcop(lista->str,s);
        lista->sig = nullptr;
    } else {
        lista_string aux = lista;
        while (aux->sig!= nullptr)
            aux = aux->sig;
        aux->sig = new nodoS;
        strcop(aux->sig->str,s);
        aux->sig->sig = nullptr;
    }
}

int largo(lista_string lStr) {
    int cant=0;
    while (lStr!=nullptr) {
        cant++;
        lStr=lStr->sig;
    }
    return cant;
}

void comandoALista(string original, lista_string &lstr) {
    lista_string listaAux = nullptr;
    string palabra;
    strcrear(palabra);
    int i = 0;
    while (original[i] != '\0') {
        while (original[i]== ' ' && original[i]!= '\0')
            i++;
        int j = 0;
        while (original[i + j]!= ' ' && original[i + j]!= '\0')
            j++;
        if (j>0) {
            palabra = new char [j+1];
            for (int k= 0; k<j; k++)
                palabra[k] = original[i+k];
            palabra[j]= '\0';
            insBack(listaAux, palabra);
        }
        i += j;
    }
    lstr = listaAux;
}
