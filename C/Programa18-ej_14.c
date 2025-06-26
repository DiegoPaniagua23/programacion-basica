/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 01/11/2020 
 Solucion del Problema: ej_14
 	Datos de Entrada: Cantidad inddeterminada de numeros.
 	Datos de Salida: Cantidad de no. ingresados, sumatoria numeros positivos y negativos, diferencia de ambos, no. pares e impares ingresados.
 	Principales Operadores: Ciclo While, condicionales if y else, suma, resta, modulo. 
*/ 
#include <stdio.h>
int main(void){
	int num=1;
	int cantidad=0;
	int sumatoriaP=0;
	int sumatoriaN=0;
	int diferencia=0;
	int pares=0;
	int impares=0;
	
	printf("Si desea terminar la captura de numeros digite el numero 0\n");
	while (num!=0){
		printf("Escriba un numero: \n");
		scanf("%d",&num);
		cantidad=cantidad+1;
		if (num>0) 
			sumatoriaP=sumatoriaP+num;
		if (num<0)
			sumatoriaN=sumatoriaN+num;
		if(num%2==0) 
			pares++; 
		else
			impares++;
	}
	diferencia=(sumatoriaP)-(sumatoriaN);
	printf("CANTIDAD DE NO. INGRESADOS >>> %d\n",(cantidad-1));
	printf("SUMATORIA DE NO. POSITIVOS INGRESADOS >>> %d\n",sumatoriaP);
	printf("SUMATORIA DE NO. NEGATIVOS INGRESADOS >>> %d\n",sumatoriaN);
	printf("LA DIFERENCIA DE AMBAS SUMATORIAS ES >>> %d\n",diferencia);
	printf("LOS NO. PARES INGRESADOS FUERON >>> %d\n",pares);
	printf("LOS NO. IMPARES INGRESADOS FUERON >>> %d\n",impares);
}
