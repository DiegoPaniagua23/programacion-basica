#include <stdio.h> 

int main (void) 
{
	float precioPhone=0; 
	float SeisMes=0;
	float DoceMes=0; 
	float DiezOchoMes=0; 
	
	printf("¿Cual es el precio del celular que eligio?: "); 
	scanf("%f", &precioPhone); 
	
	printf("Las diferentes formas para pagarlo que ofrecemos son: \n6 meses sin intereses \n12 meses sin intereses \n18 meses sin intereses "); 
	SeisMes=precioPhone/6; 
	DoceMes=precioPhone/12;
	DiezOchoMes=precioPhone/18; 
	
	printf("\nA 6 meses sin intereses debera pagar  al mes un total de = %.2f", SeisMes); 
	printf("\nA 12 meses sin intereses debera pagar al mes un total de = %.2f", DoceMes); 
	printf("\nA 18 meses sin intereses debera pagar al mes un total de = %.2f", DiezOchoMes);
}
