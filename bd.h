#include <stdio.h>


void checkBD(){

	FILE *f;

	f = fopen("agenda.txt", "r");
	int opt;

	if (f == NULL){
		system("clear");
		printf("\t\t\t**************************\n");
		printf("\t\t\t    Agenda de Contactos\n");
		printf("\t\t\t**************************\n");
		printf("\n");
		printf("\t      *** ACTUALMENTE NO HAY CREADA NINGUNA BASE DE DATOS ***\n");
		printf("\t\t        Desea crear una Base de datos ahora?\n");
		printf("\t\t\t\t\t(1.Si / 2.No)" );
		scanf("%i", &opt);
		fflush(stdin);

		while(opt != 1 || opt != 2){

			switch(opt){
				case 1: 
				crearBD();
				return;

				case 2:
				exit(0);
				break;

				default:
				printf("Opcion Incorrecta\n");
				printf("1.Si / 2.No\n");
				scanf("%i", &opt);


			}
			

		}


		

		return;

	}else{
		return;
	}

	fclose(f);

}



void crearBD(){
	FILE *f;

	f = fopen("agenda.txt", "a");

	if (f == NULL){
		printf("No se ha podido crear la Base de Datos\n");
	}else{
		printf("\t\t\t    Base de Datos creada con exito\n");
		fprintf(f, "Id;Nombre;Apellidos;Direccion;Email;Telefono\n" );
	}

	fclose(f);
}