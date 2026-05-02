#include <stdio.h>
float paroimpar(int);
int main(){
	int n1;
	printf("*****Par o Inpar??*******");
	printf("\n\nIngrese un numero: ");
	scanf("%i", &n1);
	if(paroimpar(n1)==0){
		printf("\n%i es PAR",n1);
	}else if(paroimpar(n1)==1){
		printf("\n%i Es IMPAR",n1);
	}else{
		printf("\nERROR 444");
	}
}

float paroimpar(int n){
	if(n%2==0){
		return 0;
	}else{
		return 1;
	}
	return -1;
}