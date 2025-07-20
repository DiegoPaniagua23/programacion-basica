/**
 * @file P4-OperacionesBasicas.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que realiza operaciones básicas con dos números enteros.
 */

#include <stdio.h>  

int main (void) 
{ 
	// Declaración de variables
	int num1 = 0; 
	int num2 = 0; 
	int suma = 0; 
	int resta = 0; 
	int multiplicacion = 0; 
	float division = 0; 
	
	// Solicitar al usuario que ingrese dos números
	printf ("Introduce el primer numero entero: "); 
	scanf ("%d", &num1); 
	printf ("Introduce el segundo numero entero: "); 
	scanf ("%d", &num2); 

    // Realizar las operaciones básicas
	suma = num1 + num2; 
	resta = num1 - num2; 
	multiplicacion = num1 * num2; 
	division = (float)num1 / (float)num2;

	// Imprimir los resultados
	printf("\n************************************************"); 
	printf ("\n\tSuma = %d", suma); 
	printf ("\n\tResta = %d", resta); 
	printf ("\n\tMultiplicacion = %d", multiplicacion); 
	printf ("\n\tDivision = %f", division);
	printf("\n************************************************");
	return 0;   
}
