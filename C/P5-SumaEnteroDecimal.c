/**
 * @file P5-SumaEnteroFlotante.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que realiza realiza la suma de un numero entero y un numero flotante.
 */

#include <stdio.h> 

int main (void) 
{   
	// Declaración de variables
	int numEntero = 0; 
	float numDecimal = 0; 
	float suma = 0; 
	
	// Solicitar al usuario que ingrese un número entero
	printf("Escriba un numero entero: "); 
	scanf("%d", &numEntero);  
	printf("El valor ingresado fue: %d\n", numEntero); 
  
	// Solicitar al usuario que ingrese un número decimal
	printf("\nEscriba un numero decimal: "); 
	scanf("%f", &numDecimal); 
    printf("El valor ingresado fue: %f\n", numDecimal);
   
	// Realizar la suma de los dos números
    printf("\nSe efectuara la suma de estos dos numeros, el resultado es: "); 
    suma = (float)numEntero + (float)numDecimal; 
    printf("%f\n", suma); 
}
