/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 01/11/2020 
 Solucion del Problema: ej_17
 	Datos de Entrada: Cantidad de personas, consumo, estudiante?, mayor a 65 años?.
 	Datos de Salida: Consumo total y consumo total mas la propina.
 	Principales Operadores: Suma. multiplicacion, condiciones y ciclo FOR.
*/ 
#include <stdio.h>
int main(void){
	float consumoTp=0;
	float consumoT=0;
	float consumoI=0; 
	int personas=0;
	int estudiante=0;
	int mayorEdad=0; 
	float descuento=0;
	float propina=0; 
	int contador=0;
	int Cestudiante=0; 
	int MayorEdadC=0;
	
	printf("El restaurante"); 
	printf("\nCuantas personas estuvieron en la mesa?\n");
	scanf("%d", &personas); 
	printf("Su pago se ingresara de forma individual\n");
	for (contador=1; contador<=personas; contador++)
	{
		printf("Cuanto consumio?\n $"); 
		scanf("%f", &consumoI); 
		printf("Es un estudiante? >>> Presione 1.Si o 2.No\n"); 
		scanf("%d", &estudiante);  
		if (estudiante==1){
			Cestudiante++;
			descuento=consumoI*0.15; 
			consumoI=consumoI-descuento;
			consumoT=consumoT+consumoI;
			printf("Su consumo con descuento es de >>> $ %.2f\n",consumoI); 
	    }
		if (estudiante==2){
			printf("Su edad es mayor a 65 años? >>> Presione 1.Si o 2.No\n"); 
			scanf("%d", &mayorEdad);
			if (mayorEdad==1){
				MayorEdadC++;
				descuento=consumoI*0.12;
				consumoI=consumoI-descuento;
				consumoT=consumoT+consumoI; 
				printf("Su consumo con descuento es de >>> $ %.2f\n",consumoI); 
			}	
			if (mayorEdad==2){
			printf("No hay descuento individual\n"); 
			consumoT=consumoT+consumoI;
			} 
	    }
	}
	if (Cestudiante>3){
		propina=consumoT*0.05; 
		consumoTp=consumoT+propina;	
	} 
	if (MayorEdadC>2){
		consumoTp=consumoT;
	}
	if ((Cestudiante<=3) && (MayorEdadC<=2)){
		propina=consumoT*0.15;
		consumoTp=consumoT+propina;
	}
	printf("Consumo total a pagar sin propina >>> $ %.2f\n",consumoT);
	printf("Consumo total a pagar con propina >>> $ %.2f\n",consumoTp);
}
