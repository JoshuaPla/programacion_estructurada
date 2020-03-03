#include <stdio.h>1
#include <stdlib.h>

/*Practica 6-Joshua Alejandro Hernandez Cardenas*/

int main(int argc, char *argv[]) {
	int x,sum,acum=0;
		float prom;
		
		do {
	printf("Ingrese un n%cmero positivo o igual a cero %c un n%cmero negativo para salir : ",163,162,163);
	scanf("%d",&x);
		if(x>=0){
			sum=sum+x;
			acum++;
		}
}
	while(x>=0);
	prom=((float)sum)/acum;
	printf("\nEl promedio es : %.2f",prom);
	return 0;
}
