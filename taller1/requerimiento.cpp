#include "requerimiento.h"
#include <stdlib.h>

// COANDOS
void atomic(lista_string lStr, lista_expresiones &lExp) {
    arbol root;
    crear(root);
    lStr = lStr->sig;
    cargarArbolAtomic(root, lStr->str);
    expresion e;
    crear(e);
    setArbol(e, root);
    insFront(lExp, e);
    system("cls");
    mostrar(lExp->exp);
}

void compoundNot(lista_string lStr, lista_expresiones &lExp) {
    lStr = lStr->sig;
    arbol root;
    crear(root);
    lStr = lStr->sig;
    int i = stringToInt(lStr->str);
    expresion e = find(lExp, i);
    arbol abb = clonar(getArbol(e));
    cargarArbolNot(root, abb);
    expresion j;
    crear(j);
    setArbol(j, root);
    insFront(lExp, j);
    system("cls");
    mostrar(getExpresion(lExp));
}

void compound(lista_string lStr, lista_expresiones &lExp) {
    lStr = lStr->sig;
    arbol root;
    crear(root);
    root = new nodoA;
    int i = stringToInt(lStr->str);
    expresion e1 = find(lExp, i);
    lStr = lStr->sig;
    dato_abb data;
    setDiscriminante(data,OPERADOR);
    if(reconocerOperador(lStr->str) == 'O')
        setOr(data);
    else if(reconocerOperador(lStr->str) == 'A')
        setAnd(data);
    lStr = lStr->sig;
    int j = stringToInt(lStr->str);
    expresion e2 = find(lExp,j);
    arbol abb = clonar(getArbol(e1));
    arbol abb2= clonar(getArbol(e2));
    insertarRaiz(abb, abb2, data, root);
    expresion e;
    crear(e);
    setArbol(e, root);
    insFront(lExp, e);
    system("cls");
    mostrar(lExp->exp);
}

void evaluate(lista_string lStr, lista_expresiones lExp) {
    lStr = lStr->sig;
    expresion e = find(lExp,stringToInt(lStr->str));
    system("cls");
    if(evaluar(getArbol(e)))
        printf("Expresion %d: TRUE", getNumero(e));
    else printf("Expresion %d: FALSE", getNumero(e));
}

void show(lista_string lStr, lista_expresiones lExp) {
    lStr = lStr->sig;
    int i = stringToInt(lStr->str);
    system("cls");
    mostrar(lExp, i);
}

void save(lista_string lStr, lista_expresiones lExp) {
    lStr = lStr->sig;
    int i = stringToInt(lStr->str);
    char c;
    lStr = lStr->sig;

    if (existeArchivo(lStr->str)) {
        system("cls");
        printf("Archivo existente, desea sobrescribirlo? (s/n): ");
        obtenerRespuestaValida(c);
    }

    if (!existeArchivo(lStr->str) || c == 'S' || c == 's') {
        FILE * f = fopen(lStr->str, "wb");
        if (f != nullptr) {
            expresion e = find(lExp, i);
            arbol a = getArbol(e);
            numerarArbol(a);
            guardarExpresion(e, f);
            fclose(f);
            system("cls");
            printf("Expresion %d respaldada correctamente en ",i);
            print(lStr->str);
        }
    } else {
        system("cls");
        printf("Respaldo de expresion %d cancelada", i);
    }
}

void load(lista_string lStr, lista_expresiones &lExp) {
    expresion exp;
    crear(exp);
    lStr = lStr->sig;
    FILE * f = fopen(lStr->str, "rb");
    levantarExpresion(exp,f);
    insFront(lExp,exp);
    system("cls");
    mostrar(exp);
}

// VALIDACIONES
boolean validarOperador(string s) {
    return (boolean) (streq(s, "AND") || streq(s, "OR") || streq(s, "NOT"));
}

boolean validarAtomic(lista_string lStr) {
    lista_string aux=lStr;
    aux=aux->sig;

    return (boolean) validarBool(aux->str);
}

boolean validarCompoundNot(lista_string lStr, lista_expresiones lExp) {
    lista_string aux=lStr;
    aux=aux->sig;

    if (validarOperador(aux->str)==TRUE) {
        aux=aux->sig;
        if (esNumero(aux->str)) {
            int num = stringToInt(aux->str);
            if (existe(lExp,num)==TRUE)
                return TRUE;
        }
    }

    return FALSE;
}

boolean validarCompound(lista_string lStr, lista_expresiones lExp) {
    lista_string aux=lStr;
    aux=aux->sig;

    if (validarEntero(aux->str)==TRUE) {
        int num = stringToInt(aux->str);
        if (existe(lExp,num)==TRUE) {
            aux = aux->sig;
            if (validarOperador(aux->str)==TRUE) {
                aux = aux->sig;
                num = stringToInt(aux->str);
                if (existe(lExp,num)==TRUE)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

boolean validarEvaluate(lista_string lStr, lista_expresiones lExp) {
    lista_string aux=lStr;
    aux=aux->sig;

    if (esNumero(aux->str)) {
        int num = stringToInt(aux->str);
        if (existe(lExp,num))
            return TRUE;
    }

    return FALSE;
}

boolean validarShow(lista_string lStr, lista_expresiones lExp) {
    lista_string aux=lStr;
    aux=aux->sig;

    if (esNumero(aux->str)) {
        int num = stringToInt(aux->str);
        if (existe(lExp,num))
            return TRUE;
    }

    return FALSE;
}

boolean validarSave(lista_string lStr, lista_expresiones lExp) {
    lStr = lStr->sig;

    if (esNumero(lStr->str)) {
        int num = stringToInt(lStr->str);
        if (existe(lExp,num)==TRUE) {
            lStr = lStr->sig;
            if (validarFormatoArchivo(lStr->str)==TRUE)
                return TRUE;
        }
    }

    return FALSE;
}
boolean validarLoad(lista_string lStr, lista_expresiones lExp) {
    lista_string aux = lStr;
    aux = aux->sig;

    return (boolean) (validarFormatoArchivo(aux->str) && existeArchivo(aux->str));
}

//FUNCIONALIDADES
boolean existeArchivo(string s) {
    FILE * f = fopen(s, "r");

    return (boolean) (f != nullptr);
}
