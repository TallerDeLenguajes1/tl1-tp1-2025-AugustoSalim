#include <math.h>
#include <stdio.h>

int cuadrado(int numero);
void cuadradovoid(int *numero);
void invertir(int *c, int *b);
void orden(int *c, int *b);

int main()
{
    int numero, *pnumero, *pa, *pb, a, b;

    printf("Ingrese un numero\n");
    scanf("%d",&numero);
    pnumero=&numero;
    printf("contenido de la variable: %d \n",*pnumero);
    printf("direccion de la variable: %p \n",pnumero);
    printf("el cuadrado del numero es: %d \n",cuadrado(*pnumero));
    cuadradovoid(pnumero);
    printf("-------------------------\n");
    printf("Ingrese dos numeros\n");
    scanf("%d %d",&a,&b);
    pa=&a;
    pb=&b;
    invertir(pa,pb);
    orden(pa,pb);
    return 0;
}

int cuadrado(int numero){
    numero *= numero;
    return(numero);
}

void cuadradovoid(int *numero){
    *numero *= *numero;
    printf("el cuadrado del numero calculado con funcion void: %d\n",*numero);
}

void invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    printf("Primer valor: %d\n", *a);
    printf("Segundo valor: %d\n", *b);
}
void orden(int *a, int *b){
    int aux;
    if(*a<*b){
        aux=*a;
        *a=*b;
        *b=aux;
    }
    printf ("El valor mas grande es: %d\n", *a);
    printf ("El valor mas chico es: %d\n", *b);
}