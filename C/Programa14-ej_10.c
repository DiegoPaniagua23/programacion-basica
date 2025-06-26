/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 25/10/2020 
 Solucion del Problema: ej_10; Piedra, Papel o Tijera!
 	Datos de Entrada: j1, j2
 	Datos de Salida: Mensajes para el ganador o el empate
 	Principales Operadores: && (comparaciones)
*/ 
#include <stdio.h> 
int main(void) {
	int j1, j2; 
	//Datos de entrada e insstrucciones
	printf("Piedra, Papel o Tijeras. \nPara jugar de forma correcta debe seleccionar el numero que se muestra a un lado del movimiento que quiere realizar\n");
	printf("JUGADOR 1\n Elige tu primer tiro:\n 1=Piedra\n 2=Papel\n 3=Tijera\n"); 
	scanf("%d", &j1); 
	printf("JUGADOR 2\n Elige tu primer tiro:\n 1=Piedra\n 2=Papel\n 3=Tijera\n"); 
	scanf("%d", &j2); 
	//Resultados del juego, de acuerdo a los datos ingresados
	if((j1 == 1) && (j2 == 1))
		printf("Empate, vuelvan a jugar!\n");	
	if((j1 == 2) && (j2 == 2)) 
		printf("Empate, vuelvan a jugar!\n");	
	if((j1 == 3) && (j2 == 3)) 
		printf("Empate, vuelvan a jugar!\n");	
	if ((j1 == 1) && (j2 == 2)) 
		printf("Papel envuelve a la piedra, gana el JUGADOR 2\n"); 
	if((j1 == 1) && (j2 == 3)) 
		printf("Piedra rompe tijeras, gana el JUGADOR 1\n");
	if ((j1 == 2) && (j2 == 1)) 
		printf("Papel envuelve a la piedra, gana el JUGADOR 1\n"); 
	if((j1 == 3) && (j2 == 1)) 
		printf("Piedra rompe tijeras, gana el JUGADOR 2\n");
	if((j1 == 2) && (j2 == 3))
		printf("Tijera corta el papel, gana el JUGADOR 2\n"); 
	if((j1 == 3) && (j2 == 2))
		printf("Tijera corta el papel, gana el JUGADOR 1\n"); 
}
