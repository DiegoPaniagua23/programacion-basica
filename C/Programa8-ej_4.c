#include <stdio.h> 

int main (void) 
{
	
	float densidad = 0; 
	float masa = 0; 
	float volumen = 0; 
	
	printf("Ingrese la masa del objeto en Kg: "); 
	scanf("%f", &masa); 
	printf("Ingrese el volumen del objeto en m3: "); 
	scanf("%f", &volumen); 
	densidad = masa / volumen;

	printf("Densidad en Kg/m3: %f", densidad); 
}

