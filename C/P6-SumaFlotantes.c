/**
 * @file P6-SumaFlotantes.c
 * @author Diego Paniagua Molina
 * @date 00-00-2023
 * @brief Programa que realiza realiza la suma de dos numeros flotantes y luego los multiplica por un numero entero.
 */

#include <stdio.h> 

int main (void) 
{
	// Declaración de variables
	int num3=0;
	float num1=0; 
	float num2=0;  
	float multiplicacion=0; 
	float suma=0;
	
	// Solicitar al usuario que ingrese dos números flotantes
	printf("Escriba un numero decimal: "); 
	scanf("%f", &num1); 
	printf("Escriba otro numero decimal: "); 
	scanf("%f", &num2); 
	
	// Solicitar al usuario que ingrese un número entero
	printf("Los numeros que ingreso seran sumados entre si y multiplicados por el numero entero que ingresara a continuacion: ");   
	scanf("%d", &num3); 

	// Realizar la suma de los dos números flotantes y multiplicarlos por el número entero
	suma = num1 + num2; 
	multiplicacion = suma * num3; 
	printf("El resultado de las operaciones fue = %f", multiplicacion); 
	return 0;  
}
