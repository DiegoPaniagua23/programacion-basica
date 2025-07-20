/**
 * @file P2-DeclaracionVariables.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que declara e imprime variables de diferentes tipos.
 */

// Libreria para entrada/salida estandar 
#include <stdio.h> 

// Funcion principal del programa
void main (void) 
{ 
	// Declaracion de variables 
	int num1 = 0;
	int num2 = 0; 
	int suma = 0; 
	float num3 = 0; 
	float num4 = 0;

	// Asignacion de valores a las variables
	num1 = 12565; 
	num2 = 5879; 
	suma = num1 + num2;
	num3 = 3.1416;  
	num4 = 9.826587; 

	// Vamos a imprimir los valores de num1, num2 y su suma 
	printf("%d\n",num1); 
	printf("%d\n",num2); 
	printf("Suma de num1 y num2: %d\n", suma);

	// Vamos a imprimir las variables flotantes 
	printf("Valor flotante %f\n",num3);
	printf("Valor flotante %f\n",num4); 
	printf("Valor flotante con dos decimales %.2f\n",num3);
	printf("Valor flotante con tres decimales %.3f\n",num4);
 } 
