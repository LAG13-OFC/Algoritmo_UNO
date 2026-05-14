#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
float montoViatico(float, float, float);
void mostrar(int);
int main(){
	
	
	int coLeg, contV=0;
	char catEmple, rta[3];
	float kmRec, gasPeaje, gasComid, antici;
	
	do{
		antici=0;
		system("cls");
  		printf("Imgrese Codigo de Legajo: ");
					  
		scanf("%i", &coLeg);
		printf("\nCategoria de Empleado:\n[v]> Vendedor\n[j]> Jefe Comercial\n[g]> Gerente de Producto");
		printf("\nIngrese una Opcion: ");
		scanf(" %c", &catEmple);
		printf("\nIngrese Kiolometros Recorridos: ");
		scanf("%f", &kmRec);
		printf("\nIngrese Gastos de Peajes: ");
		scanf("%f", &gasPeaje);
		printf("\nIngrese Gastos de Comidas: ");
		scanf("%f", &gasComid);
		
		if(catEmple=='v'){
			printf("\nIngrese Antecipo: ");
			scanf("%f", &antici);
		}
 		if(catEmple=='v' && kmRec > 2000) contV++;

		if(montoViatico(valKm, gasPeaje, gasComid)-antici >0){
			printf("\n\nImporte a Pagar por la empresa es de: $%.2f", montoViatico(kmRec, gasPeaje, gasComid)-antici);
		}else if(montoViatico(valKm, gasPeaje, gasComid)-antici<0){
			printf("\n\nImporte a devolver por el Empleado es de: $%.2f", fabs(montoViatico(kmRec, gasPeaje, gasComid)-antici));
		}else{
			printf("\n\nEl importe es 0");
		}
		
		printf("\n\nDeseas seguir ingresando datos? si/no: ");
		scanf("%s", rta);
		
	}while(!strcmp("si", rta));
	
	mostrar(contV);
	
	return 0;

}

float montoViatico(float kmRec, float gp, float gc){
	float valKm;
	if(kmRec <=2000){
			 valKm = kmRec*10;
	}else{
		valKm = 2000*10;
		valKm += (kmRec-2000)*5;
	}
	return valKm+gp+gc;
}
void mostrar(int c){
	printf("\n\nLa cantidad de empleados Vendedores que recorrieron mas de 2000Km es de: %i", c);
}

