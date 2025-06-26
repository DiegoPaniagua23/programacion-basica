#include <stdio.h> 

int main (void) 
{
	float C=0;  
	float K=0; 
	float F=0; 
	
	printf("Ingrese la cantidad de grados celsius que desea convertir a fahrenheit y kelvin: "); 
	scanf("%f", &C); 
	K=273+C; 
	F=1.8*C+32; 
	printf("\nGrados Fahrenheit: %f", F); 
	printf("\nGrados Kelvin: %f", K);	
}
