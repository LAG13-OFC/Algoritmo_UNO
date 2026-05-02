/*
	3-HALLAR EL ÁREA DE LA SIGUIENTE FIGURA Y MOSTRARLA POR PANTALLA. HACER EL
	MISMO EJERCICIO CON LAS FUNCIONES AREA1, AREA2, ÁREA, MOSTRAR.

*/

#include <stdio.h>
#include <windows.h>
int area1(int), area2(int, int), area(int, int);
void mostrar(int);

int main(){
	SetConsoleOutputCP(CP_UTF8); 
    
	int l_cuadrado=3, l1_rect=4, l2_rect=2, total;
	mostrar(area(area1(l_cuadrado), area2(l1_rect, l2_rect)));
}

int area1(int l){
	return l*l;
}
int area2(int l1, int l2){
	return l1*l2;
}

int area(int ar1, int ar2){
	return ar1+ar2;
}

void mostrar(int total_area){
	printf("La Area Total de la figura es: %i cm²", total_area);
}