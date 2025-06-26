#include <stdio.h>  

int main (void) 
{ 
	int num1 = 0; 
	int num2 = 0; 
	int suma = 0; 
	int resta = 0; 
	int multiplicacion = 0; 
	float division = 0; 
	
	printf ("\n Introduce el primer numero: "); 
	scanf ("%d", &num1); 
	printf ("\n Introduce el segundo numero: "); 
	scanf ("%d", &num2); 
	suma = num1 + num2; 
	resta = num1 - num2; 
	multiplicacion = num1 * num2; 
	division = (float )num1 / (float)num2;
	printf("\n************"); 
	printf ("\n\tSuma = %d", suma); 
	printf ("\n\tResta = %d", resta); 
	printf ("\n\tMultiplicacion = %d", multiplicacion); 
	printf ("\n\tDivision = %f", division); 
	printf("\n************\n");   
}

