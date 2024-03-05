#include <stdio.h>
#include "lista_expresiones.h"

// BASE
void crear(lista_expresiones &l) {
    l = nullptr;
}

void destruir(lista_expresiones &l) {

}

boolean esVacia(lista_expresiones l) {
    boolean es = FALSE;
    if (l==nullptr)
        es=TRUE;
    return es;
}

boolean existe(lista_expresiones lista, int num) {
    if (lista == nullptr)
        return FALSE;
    else if (num <= getNumero(getExpresion(lista)))
        return TRUE;
    return FALSE;
}

void insFront(lista_expresiones &lExp, expresion e) {
    if (esVacia(lExp) == TRUE) {
        lExp = new nodoE;
        lExp->exp = e;
        setPrimerNum(lExp->exp);
        lExp->sig = nullptr;
    } else {
        lista_expresiones aux = new nodoE;
        aux->exp = e;
        setNumExp(aux->exp, getNumero(lExp->exp) + 1);
        aux->sig = lExp;
        lExp = aux;
    }
}

void mostrar(lista_expresiones lExp,int i) {
    while (getNumero(lExp->exp) != i)
        lExp = lExp->sig;
    mostrar(lExp->exp);
}

void mostrar(lista_expresiones lExp) {
    printf("\nListaExp: ");
    while (lExp != nullptr) {
        mostrar(lExp->exp);
        lExp = lExp->sig;
        if (lExp != nullptr)
            printf(" -> ");
    }
    printf("\n");
}

expresion find(lista_expresiones lExp, int i) {
    while (getNumero(lExp->exp) != i)
        lExp = lExp->sig;
    return getExpresion(lExp);
}

expresion getExpresion(lista_expresiones lExp) {
    return lExp->exp;
}
