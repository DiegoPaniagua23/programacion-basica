#include <stdio.h> 

int main (void) 
{ 
	int numEntero = 0; 
	float numDecimal = 0; 
	float suma = 0; 
  
	printf("Escriba un numero entero: "); 
	scanf("%d", &numEntero);  
	printf("\n El valor ingresado fue: %d\n", numEntero); 
  
	printf("Escriba un numero decimal: "); 
	scanf("%f", &numDecimal); 
    printf("El valor ingresado fue: %f\n", numDecimal);
   
    printf("Se efectuara la suma de estos dos numeros, el resultado es: "); 
    suma = (float)numEntero + (float)numDecimal; 
    printf("%f\n", suma); 
}
