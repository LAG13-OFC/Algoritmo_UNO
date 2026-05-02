/*
	19. CREAR UN PROGRAMA EN C QUE PIDA POR PANTALLA UN NÚMERO DEL 1 AL 10 Y
	MEDIANTE UNA FUNCIÓN MUESTRE POR PANTALLA EL NÚMERO ESCRITO EN LETRAS.

*/

#include <stdio.h>
#include <stdlib.h>
void pasaraLetras(int);
int main(){
	int n;
	printf("Ingrese un numero del 1 al 10: ");
	scanf("%i",&n);
	pasaraLetras(n);
}

void pasaraLetras(int n){
	char *palabra[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez"};
	if(n>=1 && n<=10){
		printf("\nNumero en texto es: %s\n", palabra[n]);
	}else{
		system("cls");
	 	main();
	}
}