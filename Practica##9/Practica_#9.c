#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main( ) {
	char students[10][9][150];
	int cant_std,i,aux,j=1;
	
			printf("Ingrese la cantidad de alumnos a registrar (maximo 10): ");
			scanf("%d",&cant_std);
	
		for(i=0;i<cant_std;i++){
		
				printf("Ingrese su Matricula:");
			fflush(stdin);
			gets(students[i][0]);
			
			for(aux=0;aux<i;aux++)
			{
				if(strcmp(students[aux][0],students[aux][0])==0)
				{
					printf("Alumno ya Regsitrado (INGRESE MATRICULA DE NUEVO): \n");
				}else printf("Matricula: ");
					  fflush(stdin); 
					  gets(students[i][0]);	
			}
									
			printf("\nIngrese su Nombre(s): ");
			fflush(stdin);
			gets(students[i][1]);	
										
			printf("Primer apellido: ");
			fflush(stdin);
			gets(students[i][2]);
			
			printf("Segundo apellido (opcional): ");
			fflush(stdin);
			gets(students[i][3]);
						
			printf("\nIngrese Genero (M o F): ");
			fflush(stdin);
			gets(students[i][4]);
			
			printf("Ingrese su fecha de nacimiento: ");
			fflush(stdin);
			scanf("%s",&students[i][5]);
																		
			printf("\nIngrese nombre de Escuela: ");
			fflush(stdin);
			scanf("%s",&students[i][6]);
																
			printf("Ingrese su Carrera: ");
			fflush(stdin);
			scanf("%s",&students[i][7]);
																	
			printf("Ingrese el Semestre actual: ");
			fflush(stdin);
			scanf("%s",&students[i][8]);
			
			system("cls");
		}
		
		
		
		system("cls");
		
		printf("*+---REGISTRO---+*");
	
	for(i=0;i<cant_std;i++)
	{	
		printf("\n\nDatos Alumno %d: ",j++);
			fflush(stdin);
			printf("\n%s %s %s %s (%s) %s %s %s %s",students[i][0],students[i][1],students[i][2],students[i][3],students[i][4],
			students[i][5],students[i][6],students[i][7],students[i][8]);
			
		}

	
	return 0;
}


        

