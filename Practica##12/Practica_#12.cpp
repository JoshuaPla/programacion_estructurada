#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef char cadena[' '];
typedef struct alumnos{
	long matricula;
	cadena nombre;
    char apellidos[71];
    char nacimiento[21] ;
    char escuela[61];
    char carrera[61];
    int semestre;
    char genero[5];
}def_alumno;

		void registro (def_alumno *bd_alumn);

	void imprimir(def_alumno *bd_alumno);
		

void main(){
	int i;
	def_alumno bd_alumno [10],*p_bd_alumno;
	p_bd_alumno=bd_alumno;
	for(i=0;i<10;i++,p_bd_alumno++)
	registro(p_bd_alumno);
	system ("cls");
	printf("\t*+---REGISTRO---+*");
	p_bd_alumno= bd_alumno;
	for (i=0;i<10;i++,p_bd_alumno++)
		imprimir(p_bd_alumno);
	}
		
void registro (def_alumno *bd_alumn){
printf("\n\nIngrese su matricula: ");
scanf("%ld",&bd_alumn->matricula);
printf("Ingrese el nombre: ");
fflush(stdin);
gets(bd_alumn->nombre);
printf("Ingrese el apellido(s): ");
fflush(stdin);
gets(bd_alumn->apellidos);
printf("Ingrese fecha de nacimiento: ");
fflush(stdin);
scanf("%s",&bd_alumn->nacimiento);
printf("\nIngrese la escuela: ");

fflush(stdin);
gets(bd_alumn->escuela);
printf("Ingrese la carrera: ");
fflush(stdin);
gets(bd_alumn->carrera);
printf("Ingrese semestre actual: ");
scanf("%d",&bd_alumn->semestre);
printf("\n\nIngrese genero (M-masculino F-femenino): ");
fflush(stdin);
scanf("%s",&bd_alumn->genero);
}
void imprimir(def_alumno *bd_alum){
printf("\n\nALUMNO: ");
printf("\n\nMatricula: %ld",bd_alum->matricula);
printf("\nNombre: %s",bd_alum->nombre);
printf("\nApellido(s): %s",bd_alum->apellidos);
printf("\nNacimiento: %s",bd_alum->nacimiento);
printf("\nEscuela: %s",bd_alum->escuela);
printf("\nCarrera: %s",bd_alum->carrera);
printf("\nSemestre actual: %d",bd_alum->semestre);
printf("\n\aGenero (M-masculino F-femenino): %s",bd_alum->genero);
}

    
