/* ------ LAB 7 EJ 1 -------

NOMBRE: David Alejandro Peñate Rodriguez
CARNET: 00104422 */

//Escriba un programa que en un archivo escriba los número positivos por el usuario y en otro los negativos.

#include <stdio.h>

int main()
{
    //ABRIENDO ARCHIVOS
    FILE *a = fopen("num.txt","w" );
    FILE *b = fopen("num2.txt","w" );

    //Mensaje por si no abren los archivos
    if (a == NULL)
    {
        printf("ERROR en a!");
        return 1; //RETORNA TRUE (QUE LA CONDICION ES VERDADERA)
    }

     if (b == NULL)
    {
        printf("ERROR en b!");
        return 1; //RETORNA TRUE (QUE LA CONDICION ES VERDADERA)
    }

    int n = 1;
    
    do
    {
        printf("\nINGRESE UN NUMERO: "); //PIDE EL NUMERO
        
        if (n > 0) //SI EL NUMERO ES MAYOR QUE 0
        {
            scanf("%d", &n);
            fprintf(a, "%d", n); //IMPRIME USANDO EL ARCHIVO a
            fprintf(a, "\n");   //SALTO DE LINEA
        } 
        else if (n < 0)
        {
            scanf("%d", &n);
            fprintf(b, "%d", n); //IMPRIME USANDO EL ARCHIVO a
            fprintf(b, "\n");   //SALTO DE LINEA
        }
        
        
    } while (n != 0); //El ciclo se va realizar hasta que encuentre
                        //un numero que sea 0 se va detener
    
    fclose(a); //CIERRA ARCHIVOS a y b
    fclose(b);

    return 0;
}