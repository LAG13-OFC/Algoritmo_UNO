#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int d_obj=0, c_dot=0, p_obj, c_lt=0, c_lh=0; 
	int c_ls=0,c_doh=0,c_dos=0, b=0, min_pot, lan_t;
	float d_alca, d_total=0, min_dt, dis_pro;
	char rta, pers, n_obj[20], min_nObj[20];
	
	printf("Deseas Ingresar Lanzamiento S/N: ");
	//fflush(stdin);
	scanf(" %c", &rta);
	
	while(rta=='S'){
		
		if(b==0){
			printf("Ingrese Distancia Objetivo: ");
			scanf("%i", &d_obj);
			b=1;
		}
		printf("Ingrese Personaje Elejido T, H o S: ");
		//fflush(stdin);
		scanf(" %c", &pers);
		printf("Ingrese Nombre de Objeto: ");
		scanf("%s", n_obj);
		printf("Ingrese Peso Objeto: ");
		scanf("%i", &p_obj);
		
		switch(pers){
			case 'T':{
				d_alca=(1.8*55)/p_obj;
				printf("\n Thor alcanzo la distancia de %.2f", d_alca);
				c_lt++;
				if(d_alca > d_obj){
					c_dot++;
				}
				break;	
			}
			case 'H':{
				d_alca=(1.75*60)/p_obj;
				printf("\nHe Man alcanzo la distancia de %.2f", d_alca);
				c_lh++;
				if(d_alca > d_obj){
					c_doh++;
				}
				break;	
			}	
			case 'S':{
				d_alca=(1.9*50)/p_obj;
				printf("\nSuperman alcanzo la distancia de %.2f", d_alca);
				c_ls++;
				if(d_alca > d_obj){
					c_dos++;
				}
				break;	
			}	
				
		}//cierra switch
		
		d_total+= d_alca;
		
		if(pers== 'T'){
			if(b==1){
				min_dt= d_alca;
				strcpy(min_nObj, n_obj);
				min_pot= p_obj;
				b=2;	
			}else{
				if(d_alca< min_dt){
					min_dt= d_alca;
					strcpy(min_nObj, n_obj);
					min_pot= p_obj;
				}
			}
		}//==T
		
		printf("\nDeseas Seguir ingresar datos s/n: ");
		scanf(" %c", &rta);	
	}//while
	
	if(b!=0){
		lan_t = c_lt+c_lh+c_ls;
		dis_pro= d_total/lan_t;
		
		if(c_lt==c_dot){
			printf("\n\n Thor Supero el Objetivo");
		}
		if(c_lh==c_doh){
			printf("He Man Supero el Objetivo \n");
		}
		if(c_ls==c_dos){
			printf("Superman Supero el Objetivo \n");
		}
		
		printf("La distancia Promedio de todos los lanzamientos es: %f \n", dis_pro);
		printf("Minima Distancia de Thor: %f\nNombre Objeto: %s\nPeso Objeto: %i", min_dt, min_nObj, min_pot);
	}else{
		printf("NO SE INGRESO DATOS");	
	}
	
}//main
