#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void menu();
float suma(float n1, float n2);//prototipo
float resta(float n1, float n2);//prototipo
float multiplicacion(float n1, float n2);//prototipo
float division(float n1, float n2);//prototipo
void mayuscula(char cadena[]);

int main(){
	menu();	
	system("pause");
	return 0;	
}//main
void menu(){
	float num1, num2;
	char operacion;
	char rta[4];
	do{
		system("cls");
		
		printf("*************Caluladora**************");
		printf("\n\nSuma, Resta, Multiplicacion y Divicion");
		printf("\n\nPara sumar ingresa 's'");
		printf("\nPara Restar ingresa 'r'");
		printf("\nPara Multiplicar ingresa 'm'");
		printf("\nPara Dividr ingresa 'd'");
		
		printf("\n\nIngrese num 1: ");
		scanf("%f", &num1);
		printf("\nIngrese num 2: ");
		scanf("%f", &num2);
		printf("\nIngrese Tipo de operacion: ");
		scanf(" %c", &operacion);
		operacion = tolower(operacion);
		switch(operacion){
			case 's':
				printf("\n%.2f + %.2f = %.2f",num1, num2, suma(num1, num2));
			break;
			case 'r':
				printf("\n%.2f - %.2f = %.2f",num1, num2, resta(num1, num2));
			break;
			case 'm':
				printf("\n%.2f * %.2f = %.2f",num1, num2, multiplicacion(num1, num2));
			break;
			case 'd':
				printf("\n%.2f / %.2f = %.2f",num1, num2, division(num1, num2));
			break;
		}
		printf("\n\nDeseas Hacer otra operacion ingrese 'SI' o 'NO' para salir: ");
		scanf("%s", rta);
		mayuscula(rta);
		printf("\n %s", rta);
	}while(strcmp(rta, "SI") == 0);	
	
}//menu
float suma(float n1, float n2){
	return n1+n2;
}
float resta(float n1, float n2){	
	return n1-n2;
}
float multiplicacion(float n1, float n2){
   	return n1*n2;
}
float division(float n1, float n2){
	return n1/n2;
}

void mayuscula(char cadena[]){
	for(int i=0; cadena[i] != '\0'; i++){//recorre la cadena de la posicion 0 hasta el ultimo caracter sin ser el \0
		if(cadena[i]>= 'a' && cadena[i] <= 'z'){//pregunta si si el caracter pertenece a la minusculas
			cadena[i] = cadena[i]-32;// si pertence le reta 32 posiciones en el codigo ASCCI, si restas 32 el caracter seria la misma pero en mayuscula
		}
	}
}
