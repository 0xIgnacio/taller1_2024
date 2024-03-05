#include <stdio.h>
#include <stdlib.h>
#include "requerimiento.h"

void menuAyuda() {
    system("cls");
    printf("========== Menu de ayuda ==========");
    printf("\n- Atomic (dos parametros):");
    printf("\n    atomic *true/false*");
    printf("\n- Compound (tres o cuatro parametros):");
    printf("\n    compound NOT *expresion*");
    printf("\n- Show (dos parametros):");
    printf("\n    show *expresion*");
    printf("\n- Evaluate (dos parametros):");
    printf("\n    evaluate *expresion*");
    printf("\n- Save (tres parametros):");
    printf("\n    save *expresion* *archivo*.dat");
    printf("\n- Load (dos parametros):");
    printf("\n    load *archivo*.dat");
}

void mostrarError(string texto) {
    system("cls");
    print(texto);
}

int main() {

    lista_expresiones lExp;
    crear(lExp);

    lista_string listaComando;
    crear(listaComando);

    char _comando;

    do {
        destruir(listaComando);
        string comando;
        strcrear(comando);
        printf("\nIngrese comando: ");
        scan(comando);
        comandoALista(comando, listaComando);

        _comando = reconocerComando(listaComando->str);

        switch (_comando) {
            case 'A':
                    if (largo(listaComando) == 2)
                        if (validarAtomic(listaComando))
                                atomic(listaComando, lExp);
                        else mostrarError("Comando atomic invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'C':
                    if (largo(listaComando) == 3)
                        if (validarCompoundNot(listaComando, lExp))
                            compoundNot(listaComando, lExp);
                        else mostrarError("Comando compound invalido");
                    else if (largo(listaComando) == 4)
                        if (validarCompound(listaComando, lExp))
                            compound(listaComando, lExp);
                        else mostrarError("Comando compound invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'H':
                    if (largo(listaComando) == 2)
                        if (validarShow(listaComando, lExp))
                                show(listaComando, lExp);
                        else mostrarError("Comando show invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'E':
                    if (largo(listaComando) == 2)
                        if (validarEvaluate(listaComando, lExp))
                                evaluate(listaComando, lExp);
                        else mostrarError("Comando evaluate invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'S':
                    if (largo(listaComando) == 3)
                        if (validarSave(listaComando, lExp))
                            save(listaComando, lExp);
                        else mostrarError("Comando save invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'L':
                    if (largo(listaComando) == 2)
                        if (validarLoad(listaComando, lExp))
                                load(listaComando, lExp);
                        else mostrarError("Comando load invalido");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            case 'X':
                    if (largo(listaComando) == 1)
                        mostrarError("Gracias por usar mi programa");
                    else mostrarError("Cantidad de parametros invalido");
                break;

            default:
                    menuAyuda();
                break;
        }
        destruir(listaComando);
    } while (_comando != 'X');

    return 0;
}
