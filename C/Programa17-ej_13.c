/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 01/11/2020 
 Solucion del Problema: ej_13 
 	Datos de Entrada: numero 1 y numero 2
 	Datos de Salida: Suma de numeros, numeros pares
 	Principales Operadores: Suma, modulo, ciclo FOR y condiciones.
*/ 
#include <stdio.h>
int main(void){
	int num1, num2, suma, i;
	int pares=0; 
	int impares=0;
	int primos=0;
	int contador=0;
	int cont=0;
	printf("\nEscriba un numero >>>");
	scanf("%d", &num1); 
	printf("\nEscriba otro numero >>>");
	scanf("%d", &num2); 
	if(num1==num2) 
		printf("\nError, los numeros ingresados no pueden ser iguales"); 
	else{
		for(contador=(num1+1); contador<num2; contador++)
		{
			printf("%d\n",contador); 
			suma=suma+contador; 
			if(contador%2==0) 
				pares++; 
			else
				impares++;	
			if ((contador%(num1+1)==0) && (contador%num2==0)) 
				cont++; 
		}
	}
	if(cont<=2)
		primos++;
	printf("SUMA >>> %d\n", suma);
	printf("CANTIDAD DE NO. PARES >>> %d\n", pares);
	printf("CANTIDA DE NO. IMPARES >>> %d\n", impares);
	printf("CANTIDAD DE NO. PRIMOS >>> %d\n", primos);
}
