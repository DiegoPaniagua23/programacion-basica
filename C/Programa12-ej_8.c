/* 
  Nombre: Diego Paniagua Molina 
  Fecha: 24/10/2020 
  Solucion del Problema: ej_8
  	Datos de Entrada: renta, agua, luz, internet, alum
  	Datos de Salida: renta, agua, luz, internet, alum
  	Principales Operaciones: if, division
*/ 
#include <stdio.h>
int main(void) {
	int renta=0; int agua=0; int luz=0; int internet=0; int alum=0; int rentaT=0;
	printf("¿Cuanto pagan de renta? >>> \n"); 
	scanf("%d", &renta);
	printf("¿Cuantos alumnos estaran viviendo este mes en la casa? >>> \n");
	scanf("%d", &alum); 
	printf("¿Cuanto pagan de agua? >>> \n");
	scanf("%d", &agua); 
	printf("¿Cuanto pagan de luz? >>> \n");
	scanf("%d", &luz); 
	printf("¿Cuanto pagan de internet? >>> \n"); 
	scanf("%d", &internet); 
	if (alum>5) {
		rentaT=renta*0.25; 
		renta=rentaT+renta; 
    } 
    printf("\nLo que debera pagar cada estudiante este mes sera >>> "); 
    renta=renta/alum ;
    agua=agua/alum; 
    luz=luz/alum; 
    internet=internet/alum; 
    printf("Renta $ %d\n", renta); 
    printf("Agua $ %d\n", agua); 
    printf("Luz $ %d\n", luz); 
    printf("Internet $ %d\n", internet); 
}
