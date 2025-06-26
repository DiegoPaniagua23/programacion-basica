#include <stdio.h> 

int main (void) 

{
	float seg=0; 
	float min=0; 
	float hrs=0; 
	float dias=0; 
	float semanas=0; 
	
	printf("Escriba la cantidad de segundos que quiere convertir a minutos, horas, dias y semanas: "); 
	scanf("%f", &seg); 
	
	min = seg / 60; 
	hrs = min /60; 
	dias = hrs/ 24; 
	semanas = dias/ 7; 
	
	printf("Minutos: %f", min); 
	printf("\nHoras: %f", hrs); 
	printf("\nDias: %f", dias);
	printf("\nSemanas: %f", semanas);  
}
