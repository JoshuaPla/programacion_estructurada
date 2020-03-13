#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,b,mul,a;
	
	printf("Ingrese un numero:  ");
	scanf("%d",&b);
	printf("\nIngrese cantidad de multiplos:  ");
	scanf("%d",&a);
	printf("\nLos multiplos son: ");
	for(i=1;i<=a;i++){
	mul=b*i;
printf("\t%d,",mul);
}
	return 0;
}
