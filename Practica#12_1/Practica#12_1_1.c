#include <stdlib.h>
#include <stdio.h>

struct fe
{
	unsigned int d,m,a;
};

struct alum
{
	struct fe f_Nacimiento;		
	char matricula[8];
	char nombre[40];
	char primerap[40];
	char segundap[40];
	char escuela[10];
	int semestre;
	struct fe 	
};


int info_estudiante(int i,struct alum std[' ']);
void impresion(int i,struct alum std[' ']);

int	main()
{
	struct alum std[10];
	int i=0,cant,genero,contM=0,contF=0,c,contLA=0,contLCC=0,contLMAD=0,contLF=0,contLM=0,contLSTI=0;
	do 
	{
	printf("Ingrese cantidad de alumnos a registrar:");
	fflush(stdin);
	scanf("%d",&cant);
	if(cant<1 || cant>10)
	puts("cantidad invalida,Ingrese de nuevo:\n");	
	} while(cant<1 || cant>10);
	for(i=0;i<cant;i++)
	{
	info_estudiante(i,std);
do
	{
	printf("\nIngrese el genero (F-Femenino  M-Msculino): \n");
	fflush(stdin);
	genero=getche();
	genero=toupper(genero);	
if(genero!='F'&& genero!= 'M')
	{
	printf("\n\tDato ivalido\n Porvavor ingrese (F - M)\n");
	}
	}while (genero!= 'F' && genero!='M');
	switch(genero)
	{
	case 'F':contF++;
	break;
	case 'M':contM++;
	break;
}
			
		do
		{
		printf("\nCarreras:\n1-LA\n2-LCC\n3-LMAD\n4-LF\n5-LM\n6-LSTI\n");
		fflush(stdin);
		c=getche();
				
		if(c<'1' || c>'6')
		printf("\nError (La opcion es invalida)");
		}while (c<'1' || c>'6');	
		switch(c)
		{
		case '1': contLA++;
		break;
		case '2': contLCC++;
		break;
		case '3': contLMAD++;
		break;
		case '4': contLF++;
		break;
		case '5': contLM++;
		break;
		case '6': contLSTI++;
		break;
		case'7':
		break;
		}
	system("cls");
	}
	for(i=0;i<cant;i++)
	{
	impresion(i,std);
	}
	printf("Cantidad de estudiantes ingresados:%d\n",cant);
	printf("Cantidad de estudiantes Masculinos:%d\n",contM);
	printf("Cantidad de estudiantes femeninas:%d\n",contF);
	printf("Cantidad de estudiantes de LA: %d\n",contLA);
	printf("Cantidad de estudiantes de LCC: %d\n",contLCC);
	printf("Cantidad de estudiantes de LMAD: %d\n",contLMAD);
	printf("Cantidad de estudiantes de LF: %d\n",contLF);
	printf("Cantidad de estudiantes de LM: %d\n",contLM);
	printf("Cantidad de estudiantes de LSTI: %d\n",contLSTI);	
	puts("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}
int info_estudiante(int i,struct alum std[' '])
{	
		printf("\n Ingrese la datos del estudiante:\n");
		printf("\nNombre(s): ");
		fflush(stdin);
		gets(std[i].nombre);			
		printf("Primer apellido: ");
		fflush(stdin);
		gets(std[i].primerap);
		printf("Segundo apellido (opcional): ");
		fflush(stdin);
		gets(std[i].segundap);
		printf("Matricula:");
		fflush(stdin);
		gets(std[i].matricula);
		printf("\nIngrese su nacimiento\n");
		fflush(stdin);
		printf("\n\nDia:");
		scanf("%s",&std[i].f_Nacimiento.d);
		printf("Mes:");
		scanf("%s",&std[i].f_Nacimiento.m);
		printf("Ano:");
		scanf("%s",&std[i].f_Nacimiento.a);									
		printf("Escuela: ");
		fflush(stdin);
		scanf("%s",&std[i].escuela);								
		printf("Semestre: ");
		fflush(stdin);
		scanf("%s",&std[i].semestre);		
	return i;
}
	
void impresion(int i,struct alum std[' '])
{
		printf("\nNombre(s): %s\n",&std[i].nombre);
		printf("Primer apellido: %s\n",&std[i].primerap);
		printf("Segundo apellido (opcional): %s\n",&std[i].segundap);
		printf("Matricula: %s\n",&std[i].matricula);
		printf("Nacimiento: \n%s/%s/%s",&std[i].f_Nacimiento.d,&std[i].f_Nacimiento.m,&std[i].f_Nacimiento.a);									
		printf("\nEscuela: %s",&std[i].escuela);
		printf("\nSemestre: %s",&std[i].semestre);		
		puts("\n");
	
}	

