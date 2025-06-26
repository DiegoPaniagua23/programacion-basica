/* 
 Nombre: Diego Paniagua Molina 
 Fecha: 10/11/2020 
 Solucion del Problema: Calcular IMC y estimado de IMC
 	Datos de Entrada: peso y estatura. 
 	Datos de Salida: IMC y estimado de IMC si el peso aumenta o disminuye.
 	Principales Operadores: Condiciones if, multiplicacion, division y ciclo FOR.
*/  
#include <stdio.h> 
int main(void){
	//Declaracion de variables
	float peso=0, IMC=0, estatura=0; 
	int decision=0, rango=0, opcion=0;
	
	//Inicio del programa
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                         PROGRAMA PARA CALCULAR SU IMC"); 
	printf("\n------------------------------------------------------------------------------------------------------------------------"); 
	//Opciones que puede calcular el programa
	printf("\n\n\nQue desea calcular?\nPresione 1.Para su estado e IMC actual\nPresione 2.Para hacer un estimado de como varia su IMC si aumenta o disminuye de peso\n "); 
	scanf("%d",&decision); 
	//Si se elige el numero 1
	if(decision==1){
		//Se ingresan los datos por el usuario 
		printf("Ingrese su peso en (Kilogramos): ");
    	scanf("%f", &peso); 
    	printf("Ingrese su estatura en (Metros): ");
    	scanf("%f", &estatura);
		IMC=peso/(estatura*estatura);
    	printf("Su IMC actual es de = %.2f\n",IMC);
	    //Opciones a mostrar de acuerdo al IMC calculado
		if(IMC<18.5 )
        	printf ("Y se encuentra en un estado de bajo peso\n");
    	if((IMC>=18.5) && (IMC<=24.9))
        	printf ("Y se encuentra en un estado normal\n");
        if((IMC>=25) && (IMC<=29.9))
        	printf ("Y se encuentra en un estado de sobrepeso\n");
        if((IMC>=30) && (IMC<=34.9))
        	printf ("Y se encuentra en un estado de obesidad 1\n");
        if((IMC>=35) && (IMC<=39.9))
        	printf ("Y se encuentra en un estado de obesidad 2\n");
        if((IMC>=40) && (IMC<=49.9))
        	printf ("Y se encuentra en un estado de obesidad 3\n");
        if(IMC>50)
        	printf ("Y se encuentra en un estado de obesidad 4\n");
	}
	//Si se elige el numero 2
    if(decision==2){
    	//Se ingresan los datos por el usuario
    	printf("Ingrese su peso en (Kilogramos): ");
    	scanf("%f", &peso); 
    	printf("Ingrese su estatura en (Metros): ");
    	scanf("%f", &estatura);
		IMC=peso/(estatura*estatura);
    	printf("Su IMC actual es de = %.2f\n",IMC);
    	//Preguntamos si desea saber el estimado cuando su peso aumente o disminuya
    	printf("Desea saber un estimado cuando su peso aumenta o disminuye?\nPresione 1.Aumenta\nPresione 2.Disminuye\n ");
    	scanf("%d",&opcion); 
    	//Si su peso aumenta
    	if(opcion==1){
    		//Vemos hasta que peso desea saber un estimado
    		printf("Hasta donde le gustaria saber el estimado de su IMC en Kilogramos?: "); 
    		scanf("%d",&rango);
    		//Declaramos un ciclo FOR para mostrar de kilo en kilo dicho estimado con un decremento de 10 como lo pide el problema
			for(peso=(peso-10); peso<=rango; peso++){
				printf("\nSu IMC a los %.2f Kg", peso); 
				IMC=peso/(estatura*estatura); 
				printf("\nSeria, IMC = %.2f\n",IMC);
				//Opciones a mostrar de acuerdo al IMC y estimado deseado
				if(IMC<18.5)
        			printf ("Y se encontraria en un estado de bajo peso\n");
       			 if((IMC>=18.5) && (IMC<=24.9))
        			printf ("Y se encontraria en un estado normal\n");
        		if((IMC>=25) && (IMC<=29.9))
        			printf ("Y se encontraria en un estado de sobrepeso\n");
        		if((IMC>=30) && (IMC<=34.9))
        			printf ("Y se encontraria en un estado de obesidad 1\n");
        		if((IMC>=35) && (IMC<=39.9))
        			printf ("Y se encontraria en un estado de obesidad 2\n");
        		if((IMC>=40) && (IMC<=49.9))
        			printf ("Y se encontraria en un estado de obesidad 3\n");
       			if(IMC>50)
        			printf ("Y se encontraria en un estado de obesidad 4\n");
        	} 
    	}
    	//Si su peso disminuye
    	if(opcion==2){
    		//Vemos hasta que peso desea saber un estimado
    		printf("Hasta donde le gustaria saber el estimado de su IMC en Kilogramos?: "); 
    		scanf("%d",&rango);
    		//Declaramos un ciclo FOR para mostrar de kilo en kilo dicho estimado con un aumento de su peso en 10 (contrario a si supeso aumenta)
			for(peso=(peso+10); peso>=rango; peso--){
				printf("\nSu IMC a los %.2f Kg", peso); 
				IMC=peso/(estatura*estatura); 
				printf("\nSeria, IMC = %.2f\n",IMC);
				//Opciones a mostrar de acuerdo al IMC y estimado deseado
				if(IMC<18.5)
        			printf ("Y se encontraria en un estado de bajo peso\n");
       			if((IMC>=18.5) && (IMC<=24.9))
        			printf ("Y se encontraria en un estado normal\n");
        		if((IMC>=25) && (IMC<=29.9))
        			printf ("Y se encontraria en un estado de sobrepeso\n");
        		if((IMC>=30) && (IMC<=34.9))
        			printf ("Y se encontraria en un estado de obesidad 1\n");
        		if((IMC>=35) && (IMC<=39.9))
        			printf ("Y se encontraria en un estado de obesidad 2\n");
        		if((IMC>=40) && (IMC<=49.9))
        			printf ("Y se encontraria en un estado de obesidad 3\n");
       			if(IMC>50)
        			printf ("Y se encontraria en un estado de obesidad 4\n");
			}
		}	
	}
//Fin del programa
}
