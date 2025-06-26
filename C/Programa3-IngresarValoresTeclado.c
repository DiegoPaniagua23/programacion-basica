#include <stdio.h> 

int main (void) 
{ 
	//Ingrese valores desde el teclado 
	int valorEntero = 0; 
	printf("Introduce un valor entero: "); 
	scanf("%d", &valorEntero); 
	printf("El valor ingresado fue: %d\n", valorEntero); 
	
	float valorDecimal = 0.0; 
	printf("Introduce un valor decimal: "); 
	scanf("%f", &valorDecimal); 
	printf("El valor ingresado fue: %f\n", valorDecimal);
}
