#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor[100],num,x,i;
		
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	
	while(num<1 && num>100) {
	printf("Numero invalido");	
	}
	printf("\n");
	for(i=1;i<=num;i++) {
	valor[i]=i;
	}
	for(i=1;i<=num;i++) {
	if(valor[i]==2 || valor[i]==3 || valor[i]==5 || valor[i]==7) {
	printf(" %d, ",valor[i]);
	}
	else {
	if(valor[i]%2!=0 && valor[i]%3!=0 && valor[i]%5!=0 && valor[i]%7!=0) {
	printf(" %d, ",valor[i]);
	}
	}
}
	printf("Son numeros primos");
	return 0;
}
