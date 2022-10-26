/* EJERCICIO 1
NOMBRE: DAVID ALEJANDRO PEÑATE RODRIGUEZ
CARNET: 00104422  */

#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];        // ARREGLO TAMANO 50
    char combinacion[35]; // ARREGLO TAMANO 35
    char *result;

    // MENSAJE PIDE EL TEXTO
    printf("\nINGRESAR UN TEXTO: ");
    scanf("%s", text);

    // MENSAJE PIDE QUE QUIERE COMPARAR
    printf("\nQUE QUIERE COMPARAR: ");

    scanf("%s", combinacion);

    result = strstr(text, combinacion); // LEE LO QUE ESTA EN TEXT Y COMBINACION

    // 5 == 4
    //  5 != 4

    if (result != NULL) // RESULT DISTINTO DE NULO
    {
        printf("\n-- SI SE ENCONTRO EN EL TEXTO -- \n");
        printf("\n-- LAS OCURRENCIAS SON %s QUE ESTA EN %s --", combinacion, text);
    }
    else
        printf("\n-- NO SE ENCONTRARON OCURRENCIAS --"); // SI NO, ENTONCES...

    return 0;
}
