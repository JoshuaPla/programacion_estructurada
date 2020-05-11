#include <stdio.h>
#include <stdlib.h>

/* Joshua Alejandro Hernandez Cardenas-1930693 */

int main(int argc, char *argv[]) {
	
	int matrix[3][3],v_escalar;
	int i=0,j=0;
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		
	printf("\aIngrese el valor de la posicion (%d,%d): ",i+1,j+1);
	scanf("%d",&matrix[i][j]);
	}
}
	
	printf("\nSu matriz original tiene los siguientes datos: \n\n");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",matrix[i][j]);
	}
	printf("\n");
	}
	
	 
	printf("\n\nIngrese su valor escalar: ");
	scanf("%d",&v_escalar);
	
	system("cls");
	
	printf("Su matriz con el valor escalar tiene el siguiente resultado: \n\n");

	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %4d ",matrix[i][j]*v_escalar);
	}
	printf("\n");
	}
	
	return 0;
}
