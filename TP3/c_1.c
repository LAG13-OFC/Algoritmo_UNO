/*
	1-CRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL
	NÚMERO BASE Y EL EXPONENTE.
	EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y
	DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.
*/
#include <stdio.h>
float potenciar(float, float);

int main(){
	float base, exponente;
	
	printf("*****Potencia de un Numero******");
	printf("\n\nIngrese Base: ");
	scanf("%f", &base);
	printf("\nIngrese Exponente: ");
	scanf("%f", &exponente);
	printf("El resultado es: %.2f", potenciar(base, exponente));
}

float potenciar(float b, float e){
	int i;
	float result=1;
	for(i=0; i<e; i++){
		result*=b;
	}
	return result;
}