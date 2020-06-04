#include<stdio.h>

long fib(long x){
	if (x==0 || x==1)
		return x;
	else 
		return fib(x-1) + fib(x-2); 
}

int main(){

	int i;
	long x, n=0;

	printf("Ingrese  cantidad de numeros para la serie de fibonacci: ");
	scanf("%ld", &x);

	for(i=0; i<x; i++){
		n=fib(i);
		printf("%ld ", n);

		n=0;
	}

	return 0;
}
