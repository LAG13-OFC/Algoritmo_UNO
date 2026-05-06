/*
  	17. CREAR UNA FUNCIÓN “ESPRIMO”, QUE RECIBA UN NÚMERO Y DEVUELVA EL VALOR 1 SI ES
	UN NÚMERO PRIMO O 0 EN CASO CONTRARIO.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int);
int main(){
	int n;
	system("cls");
	printf("Ingrese un numero: ");
	scanf("%i", &n);
	if(primo(n)){
		printf("\nEs primo\n\n");
		system("pause");
		main(); 
	} else{
		printf("\nNo es primo\n\n");
	 	system("pause");
		main();
	}      
	return 0;   
}

int primo(int n){
	int i;
	if(n<=1) return 0;//un numero primo es natura y 1 no es primo porque tiene solo un divisor
	
	for(i=2; i<n/2; i++){
		if(n%i == 0) return 0; 
	}
	return 1; 	
}