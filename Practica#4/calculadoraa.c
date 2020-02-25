#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,s,r,m,d;
	char o;
	printf("BIENVENIDO A LA CALCULADORA\n\n");
	printf("Ingrese un n%cmero:\n\a",163);
		fflush(stdin);
		scanf("%f",&a);
		printf("Ingrese otro n%cmero:\n\a",163);
		fflush(stdin);
		scanf("%f",&b);
	printf("\n\nIngrese simbolo de operiacion:\n+ para sumar\n- para restar\n* para multiplicar\n/ para dividir\n=");
		fflush(stdin);
		scanf("%c",&o);
			switch(o){
				case '+': s=a+b;
					printf("\n\nLa suma de sus n%cmeros es:\t%0.2f",163,s);
					break; 
				case '-': r=a-b;
					printf("\n\nLa resta de sus n%cmeros es:\t%0.2f",163,r);
					break;
					case '*': m=a*b;
					printf("\n\nLa multiplicaci%cn de sus n%cmeros es:\t%0.2f",162,163,m);
					break;
					case '/': d=a/b;
					printf("\n\nLa divici%cn de sus n%cmeros es:\t%0.2f",162,163,d);
					break;
					default: printf("\n\nMath Error");
					}
	return 0;
}
