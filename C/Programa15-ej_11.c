/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 25/10/2020 
 Solucion del Problema: ej_11 
 	Datos de Entrada: dep, horas, sueldo
 	Datos de Salida: sueldoT
 	Principales Operadores: multiplicacion, suma, resta, switch, if 
*/ 
#include <stdio.h>
int main(void){
	int dep, horas; 
	float sueldo, deduccion, sueldoF, pagoHoras, sueldoT;
	printf("¿En cual de los 3 departamentos se encuentra trabajando?\n 1=Finanzas\n 2=Ventas\n 3=Recursos Humanos\n"); 
	scanf("%d", &dep); 
	printf("¿Cual es el sueldo base del empleado?\n");
	scanf("%f", &sueldo);
	switch (dep)
	{
		case 1: 
			deduccion=sueldo*0.025;
			sueldoF=sueldo-deduccion;
			break;
		case 2: 
			deduccion=sueldo*0.03;
			sueldoF=sueldo-deduccion;
			break;
		case 3: 
			deduccion=sueldo*0.045;
			sueldoF=sueldo-deduccion;
			break; 
		default: 
			printf("Error, departamento ingresado de forma incorrecta"); 
	}
	printf("¿Cuantas horas extras a trabajado el empleado?\n");
	scanf("%d", &horas); 
	if ((horas<12) && (horas>0))
	{
		pagoHoras=(sueldoF*0.05)*horas; 
		sueldoT=pagoHoras+sueldoF;
    }
	if (horas>=12) 
	{
		pagoHoras=(sueldoF*0.05)*(horas)+500;
		sueldoT=pagoHoras+sueldoF;
	}
	if (horas<=0)
		printf("No hay horas extra");
	printf("Lo que se le debe pagar al empleado es un total de $ %.2f", sueldoT); 
}
