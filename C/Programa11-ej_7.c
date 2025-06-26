/* 
  Nombre: Diego Paniagua Molina 
  Fecha: 21/10/2020 
  Solucion del Problema: ej_7 
  	Datos de Entrada: num1 y num2 
  	Datos de Salida: suma, resta, multiplicacion y/o division
  	Principales Operaciones: suma, resta, multiplicacion y/o division
*/ 
#include <stdio.h> 
int main(void) {
	int num1, num2; 
	printf("Escriba un numero positivo >>> "); 
	scanf("%d", &num1); 
	printf("Escriba un numero positivo >>> "); 
	scanf("%d", &num2); 
	if((num1<0) || (num2<0)) 
		printf("ERROR no se aceptan numeros negativos\n"); 
	else 
	  {
		if((num1%2==0) && (num2%2==0)) 
			{ 
				if(num1>num2) 
					printf("La division es %.1d / %.1d = %.1d\n", num1, num2, num1/num2); 
				else
					printf("La division es %.1d / %.1d = %.1d\n", num2, num1, num2/num1);
			} 
		if(num1==num2) 
			printf("La multiplicacion es %.1d * %.1d = %.1d\n", num1, num2, num1*num2); 
		if(num1>num2) 
			printf("La suma es %.1d + %.1d = %.1d\n", num1, num2, num1+num2); 
		if(num1<num2) 
				printf("La resta es %.1d - %.1d = %.1d\n", num2,num1, num2-num1); 
      }
}
