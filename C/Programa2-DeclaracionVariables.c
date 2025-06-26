#include <stdio.h> 

//Comentarios em una sola linea 

/*Comentarios de varias lineas 
*
*
Fin de comentarios de varias lineas*/ 
int main (void) 
{ 
	/*En este codigo vamos a declarar e imprimir variables*/ 
	int num1 = 0;
	int num2 = 0; 
	int suma = 0; 
	float num3 = 0; 
	float num4 = 0;
	num1 = 12565; 
	num2 = 5879; 
	num3 = 3.1416;  
	num4 = 9.826587; 
	//Vamos a imprimir los valores de num1 y num2 
	printf("%d\n",num1); 
	printf("%d\n",num2); 
	//Vamos a imprimir las variables flotantes 
	printf("Valor flotante %f\n",num3);
	printf("Valor flotante %f\n",num4); 
	printf("Valor flotante con dos decimales %.2f\n",num3);
	printf("Valor flotante con tres decimales %.3f\n",num4);
 } 
