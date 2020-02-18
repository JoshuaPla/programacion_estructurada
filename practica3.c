#include<stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char c;
printf("\aIngresa un caracter: ");
c=getchar();

int a =(int)c;

if(a>= 48 && a <= 57 ){
printf("Es un numero:\n");
}
else{
if(a>=65 && a<=90 ){
printf("Es una letra mayuscula:\n");
}
else{
if(a>=97 && a<=122){
printf("Es una letra minuscula:\n");
}
else{
printf("Es un simbolo:\n");
}
}
}
putchar(c);
printf("\n");
	return 0;
}
