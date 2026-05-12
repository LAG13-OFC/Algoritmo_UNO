#include <stdio.h>
#include <stdlib.h>
int tiempoVuelo(int, int, int);
void mostrarA(int, int, int);
void mostrarB(int);
int main(){
	int v_escaEst, v_n, v_t, v_escaCan, b=0, min_vt, min_vn = 0, cont_N=0, cont_M=0, cont_I=0;
	char v_dest, v_esca, rta;
	printf("Ingrese el tiempo estimado por escala: ");
	scanf("%i", &v_escaEst);
	
	do{
		v_escaCan=0;
		system("cls");
		printf("Ingrese Numero de Vuelo: ");
		scanf("%i", &v_n);
		printf("\nDestinos:\n[N]> Nacional\n[M]> Internacional Mercosur\n[I]> Internacional Fuera de Mercosur\n");
		printf("\nIngrese una Opcion: ");
		scanf(" %c", &v_dest);
		printf("\nIngrese Tiempo de Vuelo: ");
		scanf("%i", &v_t);
		printf("\nEl Vuelo tiene Escala? S/N : ");
		scanf(" %c", &v_esca);
		if(v_esca=='S'){
			printf("\nIngrese escala del vuelo: ");
			scanf("%i", &v_escaCan);
			if(b==0){
				min_vt=v_t;
				min_vn=v_n;
				b=1;
			}else{
				if(v_t<min_vt){
					min_vt=v_t;
					min_vn=v_n;
				}
			}
			printf("\n\nNumero de vuelo: %i\nTiempo Total de Vuelo con Escala: %i", v_n, tiempoVuelo(v_t, v_escaCan, v_escaEst));
		}else{
			printf("\n\nNumero de vuelo: %i\nTiempo Total de Vuelo: %i", v_n, v_t);
		}
		switch(v_dest){
			case 'N' : cont_N++; break;
			case 'M' : cont_M++; break;
			case 'I' : cont_I++; break;
		}
		printf("\n\nDeseas seguir ingresando vuelos? S/N : ");
		scanf(" %c", &rta);
		
	}while(rta=='S');
	
	mostrarA(cont_N, cont_M, cont_I);
	mostrarB(min_vn);
	return 0;

}
int tiempoVuelo(int tV, int canEsc, int tEs){
	return tV+tEs*canEsc;
}
void mostrarA(int n, int m, int i){
	system("cls");
	printf("Cntidad de vuelos:\nNacional: %i\nInternacional Mercosur: %i\nInternacional Fuera Mercosur: %i", n, m ,i);
}

void mostrarB(int nv){
	if(nv!=0){
		printf("\n\nEl nuemero de vuelo con menor tiempo que no haya hecho escala es: %i\n", nv);
	}else{
		printf("\n\nNo hubo Vuelos sin Escalas\n");
	}
	
}

