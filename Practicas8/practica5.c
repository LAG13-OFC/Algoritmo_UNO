#include <stdio.h>
#include <stdlib.h>

int main(){
	int nDepa, destDepa, contD=0;
	char catDepa, cocheDepa, rta, multa;
	float multDepa=0;
	float expensa(char, int, char);
	void mostrarD(int);
	do{
	   system("cls");
	   printf("Ingrese Numero de Departamento: ");
       scanf("%i", &nDepa);
       printf("\nCategoria Del departamento:\n[p]> Piso\n[s]> Semi Piso\n[d]> Dos Smbientes\n[m]> Monoambiente");   
       printf("\nIngrese una Opcion: ");
       scanf(" %c", &catDepa);
       if(expensa(catDepa, destDepa, cocheDepa)!=-1){
	       printf("\nDestino del Departamento:\n[0]> Uso Particular\n[1]> Uso Profesional");
	       printf("\nIngrese una Opcion: ");
	       scanf("%i", &destDepa);
	       printf("\nEl Departamento tiene Cochera?:\n[s]> Si\n[n]> No ");
	       printf("\nIngrese una Opcion: ");
	       scanf(" %c", &cocheDepa);
	       printf("Tiene multa? s/n: ");
	       scanf(" %c", &multa);
      
	       if(multa=='s'){
		       	printf("\nIngrese Monto de Multas por Incumplimiento: ");
		       	scanf("%f", &multDepa);
		   }else{
		      	multDepa=0;
		   }
       
       	 printf("\n\nTotal a Pagar: %.2f", expensa(catDepa, destDepa, cocheDepa)+multDepa);
       
	       if(catDepa=='s' && destDepa ==1){
			  		 contD++;
		   }
	   }else{
	      	printf("\n\nError: Categoria '%c' no existe", catDepa); 
	   }
      
       printf("\n\nDeseas seguir ingresando Departamentos? s/n: ");
       scanf(" %c", &rta);
       
	}while(rta=='s');
	
	mostrarD(contD);
	return 0;
}

float expensa(char cat, int dest, char coch){
	float expensaT=0;
	switch(cat){
	     case 'p':expensaT=4000; break;
		 case 's':expensaT=3000; break;
		 case 'd':expensaT=2000; break;
		 case 'm':expensaT=1000; break;
		 default :
				 return -1;
	}
	if(dest==1){
	    expensaT+=2500;
	}
	if(coch=='s'){
       expensaT+=1500;	
	 }
	return expensaT;
}

void mostrarD(int c){
	 printf("\nHay %i Departamentos de Dos Ambientes de uso Profesional\n", c);
}
	
	
	
	