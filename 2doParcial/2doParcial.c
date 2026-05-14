#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float valorPoliza(int, float);
void mostrarCobertura(float);
int main(){
	char nomClient[20], max_nom[20];
	int tVivie, antPropie, cont1=0, cont2=0, cont3=0, b=0; 
	float vPropie, mtCasa=0, vCuota, max_vCuota;
	printf("Ingrese nombre cliente o fin para no ingresar datos : ");
	scanf("%s", nomClient);
	
	while(strcmp("fin", nomClient)){
		printf("\nTipo de Vivienda:\n[1] Casa\n[2] Departamento\n[3] Local Comercial");	
		printf("\nIngrese una Opcion: ");
		scanf("%i", &tVivie);
		printf("\nIngrese Antiguedad de la vivienda en anos: ");
		scanf("%i", &antPropie);
		printf("\nIngrese Valor de la Propiedad: ");
		scanf("%f", &vPropie);
		vCuota = valorPoliza(antPropie, vPropie);
		mostrarCobertura(vCuota);
		
		switch(tVivie){
			case 1: cont1++; 
					if(antPropie>30) mtCasa+=vCuota; 
					break;
			case 2: cont2++; break;
			case 3: cont3++; break; 
		}
		if(!b){
			max_vCuota= vCuota;
			strcpy(max_nom, nomClient);
			b=1;
		}else{
			if(vCuota< max_vCuota){
				max_vCuota= vCuota;
				strcpy(max_nom, nomClient);
			}
		}
		system("pause");
		system("cls");
		printf("Ingrese nombre cliente o la palabra fin para finalizar: ");
		scanf("%s", nomClient);
	}
	if(b){
		printf("\nCantidad de cotizaciones:\nCasa: %i\nDepartamento: %i\nLocal Comercial: %i", cont1, cont2, cont3);
		printf("\nEl monto total cotizado para casas cuya antiguedad sea mayor a 30 anos es: %.2f", mtCasa);
		printf("\nClente con mayor cotizacion: %s\n\n", max_nom);
	}else{
		printf("\nNO SE INGRESO DATOS\n\n");
	}

	return 0;
}

float valorPoliza(int ant, float valor){
	float vCuota;
	if(ant>=0 && ant<=10) return valor*0.05;
	else if(ant>=11 && ant<=25) return valor*0.12;
	else return valor*0.20;
	return 0;
}
void mostrarCobertura(float v){
	if(v>=0 && v<=30000) printf("\nCobertura Integral\n\n");
	if(v>=30001) printf("\nCobertura Premium\n\n");
}
