/*
	16. CREAR UNA FUNCIÓN “ESCRIBIRTABLAMULTIPLICAR”, QUE RECIBA COMO PARÁMETRO UN
	NÚMERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE NÚMERO (POR EJEMPLO,
	PARA EL 3 DEBERÁ LLEGAR DESDE 3X0=0 HASTA 3X10=30).

*/

#include <stdio.h>
void escribitablamultiplicar(int);
int main(){
	int n;
	printf("Ingrese un Numero: ");
	scanf("%i", &n);
	escribitablamultiplicar(n);
}

void escribitablamultiplicar(int n){
	int i;
	for(i=0; i <=10; i++){
		printf("%i * %i = %i\n", n, i, n*i);
	}
}