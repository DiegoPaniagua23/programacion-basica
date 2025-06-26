/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 01/11/2020 
 Solucion del Problema: ej_15
 	Datos de Entrada: Ahorro inicial y ahorros al mes.
 	Datos de Salida: Cantidad ahorrada en 5 años.
 	Principales Operadores: Ciclo Do-While, condiciones, sumas y multiplicaciones.
*/ 
#include <stdio.h>
int main(void){
	float ahorro=0; 
	float ahorroMes=0;
	float ahorroF=0;
	float ahorroA=0;
	float montoA=0;
	int i=0;
	int mes=1;
	int meses=1;
	printf("Ingrese su ahorro >>> "); 
	scanf("%.2f",ahorro); 
	ahorroF=ahorroF+ahorro;
	do{
		if ((ahorroA)<(ahorro*2)){
			printf("\nMes %d",mes); 
			mes++; 
			meses++;
			printf("\nAhorro total del mes >>> ");
			scanf("%.2f",ahorroMes);
			ahorroA=ahorroMes*0.03; 
			ahorroF=ahorroF+ahorroA;
		}
		if ((ahorroA)>(ahorro*2)){
			printf("\nMes %d",mes); 
			mes++; 
			printf("\nAhorro total del mes >>> ");
			scanf("%.2f",ahorroMes);
			ahorroA=ahorroMes*0.05; 
			ahorroF=ahorroF+ahorroA;
		}
		if (i==12){
			montoA=ahorro*0.10; 
			ahorroF=ahorroF+montoA;
		}
		if (i==24){
			montoA=ahorro*0.10;
			ahorroF=ahorroF+montoA;
		}
		if (i==36){
			montoA=ahorro*0.10;
			ahorroF=ahorroF+montoA;
		}
		if (i==48){
			montoA=ahorro*0.10;
			ahorroF=ahorroF+montoA;
		}
		if (i==60){
			montoA=ahorro*0.10;
			ahorroF=ahorroF+montoA;
		} 
	}
	while ((meses>=1) && (meses<60));
	printf("Cantidad ahorrada en 5 años >>> %.2f",ahorroF);
}
