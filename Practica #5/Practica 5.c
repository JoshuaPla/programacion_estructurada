#include <stdio.h>
#include <stdlib.h>

/*Practica 5-Joshua Alejandro Hernandez Cardenas*/

int main(int argc, char *argv[]) {
	int x,sum,acum=0;
		float prom;
	printf("Ingrese un n%cmero positivo o igual a cero %c un n%cmero negativo para salir : ",163,162,163);
	scanf("%d",&x);
	while(x>=0){
		acum++;
		sum=sum+x;
		printf("\nIngrese un n%cmero positivo o igual a cero %c un n%cmero negativo para salir : ",163,162,163);
		scanf("%d",&x);	
		prom=sum/acum;
	}
	printf("\nEl promedio es : %.2f",prom);
	return 0;
}
