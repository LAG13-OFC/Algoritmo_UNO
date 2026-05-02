/*
	2-REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR
	PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.

*/

#include <stdio.h>
void ingreso();
void intercambio(int, int);
int main(){
	ingreso();
}

void ingreso(){
	int n1, n2;
	printf("********Intercambio de Variable*********");
	printf("\n\nIngrese el primer numero: ");
	scanf("%i", &n1);
	printf("\nIngrese el segundo numero: ");
	scanf("%i", &n2);
	printf("\n\nPrimer numero vale: %i\nSegundo numero vale: %i",n1, n2);
	intercambio(n1, n2);
	
}

void intercambio(int n1, int n2){
	int aux;
	aux= n1;
	n1= n2;
	n2= aux;
	
	printf("\n\nINTERCAMBIO: \nPrimer numero vale: %i\nSegundo numero vale: %i",n1 , n2);
}