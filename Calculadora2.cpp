#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float calculadora(float , float , char );//Prototipo
void mostrar(float );

int main(){
	float n1, n2, resultado;
	char operacion, rta[3];
	do{
		system("cls");
		printf("**********CALCULADORA**********");
		printf("\n\n|s|> Sumar");
		printf("\n|r|> Restar");
		printf("\n|d|> Divir");
		printf("\n|m|> Multiplicar");
		printf("\n\nIngrese Opcion: ");
		scanf(" %c", &operacion);
		printf("\nIngrese el primer numero: ");
		scanf("%f", &n1);
		printf("Ingrese el segundo numero: ");
		scanf("%f", &n2);
		resultado = calculadora(n1, n2, operacion);
		mostrar(resultado);
		printf("\n\nDeseas seguir relalizando operaciones SI/NO: ");
		scanf("%s", rta);
	}while(strcmp(rta, "SI")==0);
}//main

float calculadora(float num1, float num2, char op){
	switch(op){
		case 's':
			return num1+num2;
		case 'r':
			return num1-num2;
		case 'd':
			return num1/num2;
		case 'm':
			return num1*num2;
	}
}

void mostrar(float result){
	printf("\nEl resultado es: %.2f", result);
}
