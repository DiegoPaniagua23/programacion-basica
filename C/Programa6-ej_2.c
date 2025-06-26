#include <stdio.h> 

int main (void) 
{
	float num1=0; 
	float num2=0; 
	int num3=0; 
	float multiplicacion=0; 
	float suma=0;
	
	printf("Escriba un numero decimal: "); 
	scanf("%f", &num1); 
	printf("Escriba otro numero decimal: "); 
	scanf("%f", &num2); 
	
	printf("Los numeros que ingreso seran sumados entre si y multiplicados por el numero que ingresara a continuacion: ");  
	printf("\nEscriba un numero entero: "); 
	scanf("%d", &num3); 
	suma = num1 + num2; 
	multiplicacion = suma * num3; 
	printf("El resultado de las operaciones fue = %f", multiplicacion); 
	  
}
