

#include <stdio.h>

int main(){
    //Creando arreglo para guardar los multiplos
    int multiplos[20];
    //Creando variables para guardar la eleccion del usuario
    int numero = 0;
    //Pedir al usuario que ingrese el numero
    printf("Ingrese el numero del que desea ver los primeros 20 multiplos: ");
    scanf("%d", &numero);
    //Llenando el arreglo con el resultado de 1xn, 2xn, 3xn,..., 20xn
    for (int i = 0; i < 20; i++){
        multiplos [i] = numero* (i+1);
    }
    //Imprimir cada numero dentro del arreglo de multiplos
    for (int i = 0; i < 20; i++){
        printf("%d ", multiplos [i]);
    }
    //salto de linea para que se vea mejor
    printf("\n");
    
    return 0;
}
