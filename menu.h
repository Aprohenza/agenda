#include <stdio.h>
#include "bd.h"
#include "newContact.h"


void menu(){
	
	checkBD();

	int opt = 0;
	
	system("clear");
	printf("\t\t\t**************************\n");
	printf("\t\t\t    Agenda de Contactos\n");
	printf("\t\t\t**************************\n");
	printf("\n");
	printf("\t\t\t      MENU PRINCIPAL\n");
	
	
	//opciones del menu
	
	printf("1. Crear Nuevo Contacto\n2. Buscar Contacto\n3. Filtrar Contactos\n4. Estadisticas\n");
	printf("\nSeleccionar opcion:");
	fflush(stdout);
	scanf("%i", &opt);	
	fflush(stdin);
	
	while(opt != 1 || opt != 2 || opt != 3 || opt != 4){
		
		switch(opt){
		case 1:
			system("clear");
		//	crear();
			printf("opt 1\n");
			newContact();
			break;
		
		case 2:
			system("clear");
		//	decirCuantosHombres();
			printf("opt 2\n");
			break;
			
		case 3:
			system("clear");
		//	countAdmin();
			printf("opt 3\n");
			break;
		
		case 4:
			system("clear");
		//	mediaMujeres();
			printf("opt 4\n");
			break;	
			
		default:
			printf("Operacion Invalida\nSelecciona opcion correcta: ");		
	}
		
		scanf("%i", &opt);
	};
	
}
