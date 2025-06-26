/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 01/11/2020 
 Solucion del Problema: ej_12 
 	Datos de Entrada: Numero.
 	Datos de Salida: Para numero par; "****" y para numero impar "++++".
 	Principales Operadores: Condiciones if y else.
*/ 
#include <stdio.h>
int main(void){
	int num=0; 
	
	printf("Ingrese un numero entero >>> ");
	scanf("%d", &num);
	if ((num>=0) && (num<20)){
		if(num%2==0) 
			printf("******");	
		else
			printf("++++++");
	}
	else 
		printf("Error");
}

