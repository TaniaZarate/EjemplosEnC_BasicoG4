/* 	Programa: Menu numerico de opciones
	Autor: Tania Guadalupe Zarate Chavez. G4.
	Descripcion: Programa de menu numerico de opciones utilizando la instruccion if. 
	En cada opcion se debe imprimir el mensaje "has seleccionado la opcion: #de opcion"
*/

/*Bibliotecas*/
#include <stdio.h>

/*Declaracion de variables con el tipo correspondiente*/
int OPC;

/*Estructura main*/

int main()
{
	//Se imprime en pantalla el numero de opciones que vera el usuario
	printf("\t\t   MENU NUMERICO DE OPCIONES\n");
	printf("\t\t===============================\n");
	printf("1. Opcion 1\n");
	printf("2. Opcion 2\n");
	printf("3. Opcion 3\n");
	printf("4. Opcion 4\n");
	
	//Se lee del teclado la opcion
	printf("Selecciona una opcion: ");
	scanf("%d", &OPC);
    	
    	//Si la opcion tecladeada es 1, entra al if
    	if(OPC == 1){
    		printf("Has seleccionado la opcion: 1\n");
    	}
    	//Si la opcion tecladeada es 2, entra al if
    	if(OPC == 2){
    		printf("Has seleccionado la opcion: 2\n");
    	}
    	//Si la opcion tecladeada es 3, entra al if
    	if(OPC == 3){
    		printf("Has seleccionado la opcion: 3\n");
    	}
    	//Si la opcion tecladeada es 4, entra al if
    	if(OPC == 4){
    		printf("Has seleccionado la opcion: 4\n");
    	}
    	//Si la opciones teclada es diferente de 1-4, es error
    	else if(OPC!=1 && OPC!=2 && OPC!=3 && OPC!=4){
    		printf("Opcion tecleada erronea\n");
    	}
    	
    	return 0;
}
