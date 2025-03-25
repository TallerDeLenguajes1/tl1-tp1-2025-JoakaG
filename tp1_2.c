#include <stdio.h>
#include <stdlib.h>

int cuadrado();
void cuadrado2();
void mostrarVariable(int *x);
void Invertir(int *a, int *b);
void orden(int *a,int *b);


int main (){

int cuadr,a,b;
cuadr = cuadrado();
printf("\n Cuadrado: %d", cuadr);
mostrarVariable(&cuadr);
printf("\n---------------------------\n");
cuadrado2();
printf("\n---------------------------\n");
printf("Escribir primer numero a invertir: ");
scanf("%d", &a);
printf("\n Escribir segundo numero a invertir: ");
scanf("%d", &b);
mostrarVariable(&a);
mostrarVariable(&b);
Invertir(&a, &b);
printf("\n---------------------------\n");
printf("Escribir primer numero: ");
scanf("%d", &a);
printf("\n Escribir segundo numero: ");
scanf("%d", &b);
mostrarVariable(&a);
mostrarVariable(&b);
orden(&a,&b);
mostrarVariable(&a);
mostrarVariable(&b);
printf("\n---------------------------\n");
    return 0;
}

int cuadrado(){
    int n;
    printf("Escriba un número para obtener su cuadrado: ");
    scanf("%d", &n);
    mostrarVariable(&n);
    return n*n;
}

void cuadrado2(){
    int n;
    printf("\n Escriba un número para obtener su cuadrado2: ");
    scanf("%d", &n);
    printf("Cuadrado2: %d", n*n);
    mostrarVariable(&n);
}

void mostrarVariable(int *x){
    printf("\n Ubicacion variable %d \n Contenido de la variable: %d", x, *x);

    }

void Invertir(int *a,int *b){
    int aux = 0;
    aux = *b;
    *b = *a;
    *a = aux;
    printf("\n invierto a y b");
    mostrarVariable(a);
    mostrarVariable(b);
}

void orden(int *a,int *b){
    int aux = *b;
    if (*a > aux)
    {
        *b = *a;
        *a = aux;
    }
    

}