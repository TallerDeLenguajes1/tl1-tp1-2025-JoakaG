#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Hola Mundo");
int variable = 5;
int *pvariable = &variable;
printf ("\n Contenido del Puntero: %d", *pvariable);
printf ("\n Dirección de memoria almacenada en el puntero: %d", pvariable);
printf ("\n Dirección de memoria de la variable: %d", &variable);
printf ("\n Dirección de memoria del puntero: %d", &pvariable);
printf ("\n Espacio ocupado por la variable: %d bytes", sizeof(variable));
return 0;
}