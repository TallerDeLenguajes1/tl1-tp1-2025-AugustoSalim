#include <stdio.h>

int main(){
    printf("Hola Mundo\n");
    int var = 21, *pvar;
    pvar = &var;

    printf("Contenido del puntero: %d \n", *pvar);
    printf("Direccion de memoria almacenada: %p \n", pvar);
    printf("Direccion de memoria de la variable: %p \n", &var);
    printf("Direccion de memoria del puntero: %p \n", &pvar);
    printf("Tamanio de la variable: %d \n", sizeof(int));
    return 0;
}