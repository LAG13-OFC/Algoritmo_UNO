#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float calculadora(float , float , char );//Prototipo
void mostrar(float );
void mayuscula(char cadena[]);
int main(){
	float n1, n2, resultado;
	char operacion, rta[3];
	do{
		system("cls");
		printf("**********CALCULADORA**********");
		printf("\n\n|S|> Sumar");
		printf("\n|R|> Restar");
		printf("\n|D|> Divir");
		printf("\n|M|> Multiplicar");
		printf("\n\nIngrese Opcion: "); 	
		scanf(" %c", &operacion);
		operacion = tolower(operacion);
		printf("\nIngrese el primer numero: ");
		scanf("%f", &n1);
		printf("Ingrese el segundo numero: ");
		scanf("%f", &n2);
		if(n2 == 0 && operacion == 'd'){
			printf("\n\nNO SE PUEDE DIVIR POR 0 ");
		}else{
			resultado = calculadora(n1, n2, operacion);
			mostrar(resultado);
		}
		
		printf("\n\nDeseas seguir relalizando operaciones SI/NO: ");
		scanf("%s", rta);
		mayuscula(rta);
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
void mayuscula(char cadena[]){
	for(int i=0; cadena[i] != '\0'; i++){//recorre la cadena de la posicion 0 hasta el ultimo caracter sin ser el \0
		if(cadena[i]>= 'a' && cadena[i] <= 'z'){//pregunta si si el caracter pertenece a la minusculas
			cadena[i] = cadena[i]-32;// si pertence le reta 32 posiciones en el codigo ASCCI, si restas 32 el caracter seria la misma pero en mayuscula
		}
	}
}


