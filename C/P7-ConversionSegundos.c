/**
 * @file P7-ConversionSegundos.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que convierte segundos a minutos, horas, días y semanas.
 */

#include <stdio.h> 

int main (void) 
{	
	// Declaración de variables
	float seg=0; 
	float min=0; 
	float hrs=0; 
	float dias=0; 
	float semanas=0; 
	
	// Solicitar al usuario que ingrese la cantidad de segundos
	printf("Escriba la cantidad de segundos que quiere convertir a minutos, horas, dias y semanas: "); 
	scanf("%f", &seg); 
	
	// Realizar las conversiones
	min = seg / 60; 
	hrs = min /60; 
	dias = hrs/ 24; 
	semanas = dias/ 7; 
	
	// Imprimir los resultados
	printf("Minutos: %f", min); 
	printf("\nHoras: %f", hrs); 
	printf("\nDias: %f", dias);
	printf("\nSemanas: %f", semanas);
	return 0;
}
