/* 	Programa: Operaciones aritméticas con variables de diferentes tipos
	Autor: Tania Guadalupe Zarate Chavez. G4.
	Descripcion: Solicita variable de tipo entero.
		     Solicita variable de tipo decimal (float).
		     Con esas variables, realiza las operaciones aritméticas básicas (suma, resta multiplicación y división).
		     Imprime el resultado de cada operación de manera ordenada.
*/

/*Bibliotecas*/
#include <stdio.h>

/*Declaracion de variables con el tipo correspondiente*/
int numE;
float numF;
float suma, resta, mult, div;
/*Estructura main*/

int main()
{
	//Se imprime en pantalla el titulo del programa
	printf("\n\tOPERACIONES ARITMETICAS CON VARIABLES DE DIFERENTES TIPOS\n");
	printf("\t=========================================================\n\n");
	
	//Se solicita del teclado un entero
	printf("Ingresa un entero: ");
	scanf("%d", &numE);
	
	//Se solicita del teclado un flotante
	printf("Ingresa un decimal: ");
	scanf("%f", &numF);
	
	//Se asigna valor a la variable suma 
	suma = (numE + numF);
	//Se imprime en pantalla el resultado final
	printf("\nResultado de la SUMA de: %d + %.2f = %.2f\n", numE, numF, suma);
	
	//Se asigna valor a la variable resta
	resta = (numE - numF);
	//Se imprime en pantalla el resultado final
	printf("\nResultado de la RESTA de: %d - %.2f = %.2f\n", numE, numF, resta);
	
	//Se asigna valor a la variable mult
	mult = (numE * numF);
	//Se imprime en pantalla el resultado final
	printf("\nResultado de la MULTIPLICACION de: %d x %.2f = %.2f\n", numE, numF, mult);
	
	//Se asigna valor a la variable div
	div = (numE / numF);
	//Se imprime en pantalla el resultado final
	printf("\nResultado de la DIVISION de: %d / %.2f = %.2f\n\n", numE, numF, div);
	
	return 0;
}
