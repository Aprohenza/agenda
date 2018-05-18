#include <stdio.h>
#include <string.h>




char save[1] = "";
	
	char nombre[30] = "";
	char apellido[30] = "";
	char direccion[30] = "";
	char email[30] = "";
	char telefono[30] = "";



void newContact(){
	
	
	FILE *f;
	int id;

	

	f  = fopen("agenda.txt", "a");
	
	system("clear");
	printf("\t\t\t**************************\n");
	printf("\t\t\t    Agenda de Contactos\n");
	printf("\t\t\t**************************\n");
	printf("\n");
	printf("\t\t\t      NUEVO CONTACTO\n");

	fflush(stdout);
	
	
	int opt = 1;
	id = setId();
	

	while(opt == 1){

		printf("Nombre:     ");
		fflush(stdout);
		scanf("%s", nombre);
		fflush(stdin);	

		printf("Apellidos:   ");
		fflush(stdout);
		scanf("%s", apellido);
		fflush(stdin);
		
		printf("Direccion:  ");
		fflush(stdout);
		scanf("%s", direccion);
		fflush(stdin);
		
		printf("Email:      ");
		fflush(stdout);
		scanf("%s", email);
		fflush(stdin);
		
		printf("Telefono:   ");
		fflush(stdout);
		scanf("%s", telefono);
		fflush(stdin);
	
	
	/*
	
	
	printf("**************************\n");
	printf("%s \n", nombre);
	printf("%s \n", apellido);
	printf("%s \n", direccion);
	printf("%s \n", email);
	printf("%s \n", telefono);	
	printf("**************************\n");
	*/


		printf("\nDesea guardar contacto?\n");
		printf("(S/n)");
		
		gets(save);
		fflush(stdin);			
		
		printf("%s \n", save);	

		

		if (!strcmp(save, "s") || !strcmp(save, "")){			
			
			fprintf(f, "%i;%s;%s;%s;%s;%s\n", id, nombre, apellido, direccion, email, telefono);
			printf("Registro guardado\n");	

		}else{
			printf("Ha seleccionado no guardar registro\n");
		}

	
		printf("Desea agregar otro registro?\n");
		fflush(stdout);
		scanf("%i", &opt);
		fflush(stdin);
	}

	fclose(f);
	
}


int setId(){
	FILE *f;

	int id = 1;
	
	
	f = fopen("agenda.txt", "r");

	
		

	fscanf(f, "%i;%30[^;];%30[^;];%30[^;];%30[^;];%30[^\n]", &id, nombre, apellido, direccion, email, telefono);
	printf("%s\n", nombre);
	while(!feof(f)){
			
		fscanf(f, "%i;%30[^;];%30[^;];%30[^;];%30[^;];%30[^\n]", &id, nombre, apellido, direccion, email, telefono);
			
	}

	id++;
		
	

	
	//printf("lineas %i\n", id);
	return id;
	fclose(f);
}


