/* EJERCICIO 2

NOMBRE: DAVID ALEJANDRO PEÑATE RODRIGUEZ
CARNET: 00104422  */

#include <stdio.h>
#include <string.h>

int main()
{
    // VARIABLE CARACTER TAMANO 50

    char palabra[50];
    int N = 0, A = 0, i = 0, B = 0;

    // MENSAJE PIDE PALABRA
    printf("\nINGRESE UNA PALABRA: ");
    scanf("%s", &palabra);

    N = strlen(palabra); // FUNCION QUE LEE LO QUE ESTE EN PALABRA

    for (i = 0, B = N - 1; i <= B; i++, B--) // BUCLE EVALUA LOS CARACTERES
    {
        if (palabra[i] != palabra[B]) // SI PALABRA EN LA POSICION i ES DIFERENTE A PALABRA EN POSICION B
        {
            A = 1; // A sera 1

            break;
        }
    }

    if (A == 1) //SI A = 1
    {
        printf("\nLA PALABRA NO ES PALINDROMO\n");
    }
        
    else
    printf("\nLA PALABRA ES UN PALINDROMO\n");

    return 0;
}