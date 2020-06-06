#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dat_std{
	long matricula;
	char nombre[61];
	char apellidos[51];
	char nacimiento[51] ;
	char escuela[51];
	char carrera[50];
	int semestre;
	char genero[5];
}students[10];
int main(void) {
	
	struct dat_std;
	int i=0,j=0,op,a=0,cont=0,x=1;
do{
    do{
    	a=0;
    printf("Introduzca su matricula:\n");
    scanf("%ld",&students[i].matricula);
    for(j=0;j<i;j++){
        if(students[i].matricula == students[j].matricula){
            a=1;
        }
	}
    }while(a==1);
   printf("\n\nIngrese su Nombre(s): ");
    fflush(stdin);
    gets(students[i].nombre);
	
	printf("\nIngrese su apellido(s): ");
	fflush(stdin);
	gets(students[i].apellidos);
	
	
	printf("Introduzca su fecha de nacimiento: ");
	fflush(stdin);
	scanf("%s",&students[i].nacimiento);
	
	printf("Ingrese nombre de escuela: ");
	fflush(stdin);
	scanf("%s",&students[i].escuela);
	
	printf("Ingrese su carrera: ");
	fflush(stdin);
	scanf("%s",&students[i].carrera);
	
	printf("Ingrese su semestre actual: ");
	fflush(stdin);
	scanf("%d",&students[i].semestre);
	
	printf("Ingrese Genero (M-masculino F-femenino): ");
	fflush(stdin);
	scanf(" %c",&students[i].genero);
	printf("Desea ingresar otro estudiante?:\n1-Si\n 2-No\n");
	scanf("%d",&op);
	i++;
}
while(op==1);

system("cls");

for(cont=0;cont<i;cont++){
	printf("Los datos del alumno %d:\nMatricula: %ld\n Nombre(s): %s\nApellidos: %s\n Fecha de nacimiento: %s\n Escuela: %s\nGrado: %d\nCarrera: %s\n Genero: %c\n\n",x++,students[cont].matricula,students[cont].nombre,students[cont].apellidos,students[cont].nacimiento,students[cont].escuela,students[cont].genero,students[cont].carrera,students[cont].genero);
}
	return 0;
}
