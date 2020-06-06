#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct Personas{
	long matricula;
	char nombre [ 61 ];
	char apellidos [ 51 ];
	char nacimiento [ 51 ];
	char escuela [ 51 ];
	char carrera [ 50 ];
	int semestre;
	char genero [ 5 ];
}p;

int main(){
	char *datos = "Practica_json.dat", op[1];
	FILE *crear;
	/*Sirve para crear el archivo si no existe y si ya 
	existe, borra todo y lo empieza*/
	crear = fopen(datos, "w"); 
do{
	
	crear = fopen(datos, "a");//Abre y Añade al final del archivo
	if(crear == NULL){
		printf("Error,El archivo no pudo abrirse\n");
	}
	else{
		printf("\nIngrese su nombre: ");
		fflush(stdin);
		gets(p.nombre);
		printf("\nIngrese su apellido(s): ");
		fflush(stdin);
		gets(p.apellidos);
		printf("\nIngrese matricula: ");
		scanf("%ld",&p.matricula);
		printf("\n\nIngrese nacimiento: ");
		fflush(stdin);
		scanf("%s",p.nacimiento);
		printf("\n\nIngrese escuela: ");
		fflush(stdin);
		gets(p.escuela);
		printf("\nIngrese carrera: ");
		fflush(stdin);
		gets(p.carrera);
		printf("\nIngrese semestre actual: ");
		scanf("%d",&p.semestre);
		printf("\n\nIngrese genero (M-masculino F-femenino): ");
		fflush(stdin);
		gets(p.genero);
		fprintf(crear, "{\n\"Nombre\":\"%s\"",p.nombre);
		fprintf(crear, "\n\"Apellido(s)\":\"%s\"", p.apellidos);
		fprintf(crear, "\n\"Matricula\":\"%ld\"", p.matricula);
		fprintf(crear, "\n\"Nacimiento\":\"%s\"", p.nacimiento);
		fprintf(crear, "\n\"Escuela\":\"%s\"", p.escuela);
		fprintf(crear, "\n\"Carrera\":\"%s\"", p.carrera);
		fprintf(crear, "\n\"Semestre\":\"%d\"", p.semestre);
		fprintf(crear, "\n\"Genero\": \"%s\"\n}\n\n", p.genero);
		printf("\nRegistrado con exito!\nVea el archivo 'Practica_json.dat'\n");
	}
	//Cierra archivo
	fclose(crear);
	
	printf("\nDesea ingresar otro registro? SI(1), NO(2):   ");
	fflush(stdin);
	gets(op);
	
	//Validamos la cadena
	while(atoi(op)<1 || atoi(op)>2){	
		printf("\n\t Introduzca de nuevo: ");
		fflush(stdin);
		gets(op); 
	}
}while(atoi(op)!=2);
}

