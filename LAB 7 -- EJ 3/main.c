/* EJERCICIO 3

Escriba un programa que almacene cuantas letras a tiene una palabra en la primera línea,
cuantas letras e en la segunda, cuantas letras i en la tercera, y así sucesivamente para las demás vocales.

NOMBRE: DAVID ALEJANDRO PEÑATE RODRIGUEZ
CARNET: 00104422
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[13]; // palabra tendra 25 espacios

    // DECLARANDO CONTADORES DE LAS VOCALES
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;

    // MENSAJE QUE PIDE LA PALABRA

    printf("\nESCRIBA UNA PALABRA DE 12 LETRAS: ");
    fgets(palabra, sizeof(palabra), stdin); // fgets lee cadena de caracteres
    puts(palabra);                          // puts muestra o imprime la cadena de caracteres tipo printf

    for (int i = 0; i < 13; i++) // Desde que i sea 0 hasta 25 (por los 25 de espacios de palabra)
    {
        switch (palabra[i])
        {
        case 'a':     // EN CASO QUE SEA a
            cont_a++; // AUMENTE EN 1 EL CONTADOR DE A
            break;

        case 'e':
            cont_e++; // AUMENTE EN 1 EL CONTADOR DE e
            break;

        case 'i':
            cont_i++; // AUMENTE EN 1 EL CONTADOR DE i
            break;

        case 'o':
            cont_o++; // AUMENTE EN 1 EL CONTADOR DE o
            break;

        case 'u':
            cont_u++; // AUMENTE EN 1 EL CONTADOR DE u
            break;

        }
    }

    printf("\n1. LA VOCAL a ESTA %d VECES\n", cont_a);
    printf("\n2. LA VOCAL e ESTA %d VECES\n", cont_e);
    printf("\n3. LA VOCAL i ESTA %d VECES\n", cont_i);
    printf("\n4. LA VOCAL o ESTA %d VECES\n", cont_o);
    printf("\n5. A VOCAL u ESTA %d VECES\n", cont_u);
    
    return 0;
}