#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int potencial(int, int, int);
void mostrarPote(int, int);

int main(){
	int codEmpl, diaTrabajo, caliCanti, coop, capAnaCrea, resPot, contFN=0, max_cod, max_dia, b=0;
	char profe[3], rta[3];
	
	do{
		system("cls");
		printf("Ingrese Codigo Empleado: ");
		scanf("%i", &codEmpl);
		printf("\nIngresar dias de trabajo: ");
		scanf("%i", &diaTrabajo);
		printf("\nEs Profesional? SI/NO: ");
			fflush(stdin);	
			gets(profe, 3, stdin); 	 
					               
		printf("\nIngrese Cantidad o Calidad de trabajo (1 a 5): ");
  		scanf("%i", &caliCanti);
		printf("\nIngrese cooperacion (1-5): ");
		scanf("%i", &coop);
		if(!strcmp("SI", profe)){
						 printf("\nIngrese Capacidad de Análisis y Creatividad (1-5): ");
						 scanf("%i", &capAnaCrea);				   			 			    		   
	 		resPot= potencial(caliCanti, coop, capAnaCrea);	
			 mostrarPote(resPot, codEmpl);
			 if((caliCanti+coop+capAnaCrea)/3 < 3) contFN++;
		}
	 	if(!b){
   			   max_cod = codEmpl;
   			   max_dia = diaTrabajo;
			   b=1; 
		 }else{
		 	    if(diaTrabajo> max_dia){
					max_cod = codEmpl;
 		  			max_dia = diaTrabajo; 	
				 }	
		 }
		 	 
		 printf("\n\nDeseas seguir ingresando empleados? SI/NO: ");
	 	 scanf("%s", rta);
	}while(!strcmp("SI", rta));
	
	printf("\n\nEmpleados Profesional FUERA DE NIVEL hay: %i\nEl código de empleado con mayor cantidad de días trabajados es: %i\n\n", contFN, max_cod);
	
	return 0;
}

int potencial(int cc, int coo, int cap){
	if(cc>=4 && coo>=4 && cap>=4) return 1;
	
	return 0;
}
void mostrarPote(int c, int cod){
	if(c) printf("\nEl empleado de codigo %i TIENE CAPACIDAD DE DESARROLLO", cod);
	else printf("\nEl empleado de codigo %i NO TIENE CAPACIDAD DE DESARROLLO", cod);
}