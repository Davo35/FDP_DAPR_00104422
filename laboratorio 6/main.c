/* EJERCICIO 1

NOMBRE: DAVID ALEJANDRO PEÑATE RODRIGUEZ

CARNET: 00104422  */

#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];
    char combinacion[35];
    char* result;

    printf("INGRESAR UN TEXTO: ");
    scanf("%s", text);
    

    printf("QUE QUIERE COMPARAR: ");

    scanf("%s", combinacion);
    

    
    result = strstr(text, combinacion);

    //5 == 4
    // 5 != 4

    if (result != NULL)  //RESULT DISTINTO DE NULO
    {
        printf("SI SE ENCONTRO EN EL TEXTO\n"); 
        printf("LAS OCURRENCIAS SON %s QUE ESTA EN %s", combinacion, text);

    }
    else printf("NO SE ENCONTRARON OCURRENCIAS");




    return 0;
}

