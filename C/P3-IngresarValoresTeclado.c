/**
 * @file P3-IngresarValoresTeclado.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que ingresa valores desde el teclado.
 */

#include <stdio.h> 

int main (void) 
{ 
	// Obtener un valor entero desde el teclado
	int valorEntero = 0; 
	printf("Introduce un valor entero: "); 
	scanf("%d", &valorEntero); // Leer un valor entero
	printf("El valor ingresado fue: %d\n", valorEntero); 
	
	// Obtener un valor decimal desde el teclado
	float valorDecimal = 0.0; 
	printf("Introduce un valor decimal: "); 
	scanf("%f", &valorDecimal); // Leer un valor decimal
	printf("El valor ingresado fue: %f\n", valorDecimal);
}
