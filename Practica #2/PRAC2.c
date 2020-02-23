#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool op3(int j){
	
	if(j>=10) {
        return true;
    }
    else {
        return false;
    }
}
    
bool op4(int j){

    if(j<=10) {
        return true;
    }
    else {
        return false;
    }
}

bool op5(int j){
    
    if(j>10) {
        return true;
    }
    else {
        return false;
    }
}
bool op6(int j){

    if(j<10) {
        return true;
    }
    else {
        return false;
    }
}

/*Practica #2_ Operaciones- Joshua Alejandro Hernandez Cardenas*/

int main( ) {
    int x,y,suma,resta,multi,div,mod;
    float a,b,op;
    double p,q,op2;
    char c1, c2;
    char c[500];
    int j;
    bool cdn=0;
    
    printf("Ingrese dos numeros enteros: \n"); 
    fflush(stdin);
    scanf("%d%d",&x,&y);
    suma=x+y;
    printf("La suma de los numeros es:%d\n",suma);
    resta=x-y;
    printf("La resta de los numeros es:%d\n",resta);
    multi=x*y;
    printf("La multiplicacion es:%d\n",multi);
    div=x/y;
    printf("La division es:%d\n",div);
    mod=x%y;
    printf("El modulo es:%d\n",mod);
    printf("%d>=%d\n",x,y);
    if (x>=y) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d<=%d\n",x,y);
    if (x<=y) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d>%d\n",x,y);
    if (x>y) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%d<%d\n",x,y);
    if (x<y) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    printf("\nIngrese dos numeros decimales: \n");
    fflush(stdin);
	scanf("%f%f",&a,&b);
    op=a+b;
    printf("La suma de los numeros es:%.2f\n",op);
    op=a-b;
    printf("La resta de los numeros es:%.2f\n",op);
    op=a*b;
    printf("La multiplicacion es:%.2f\n",op);
    op=a/b;
    printf("La division es:%.2f\n",op);
    printf("%.2f>=%.2f\n",a,b);
    if (a>=b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f<=%.2f\n",a,b);
    if (a<=b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f>%.2f\n",a,b);
    if (a>b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2f<%.2f\n",a,b);
    if (a<b) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    printf("\nIngrese dos numeros decimales:\n");
    fflush(stdin);
    scanf("%lf%lf",&p,&q);
    op2=p+q;
    printf("La suma de los numeros es:%.2lf\n",op2);
    op2=p-q;
    printf("La resta de los numeros es:%.2lf\n",op2);
    op2=p*q;
    printf("La multiplicacion es:%.2lf\n",op2);
    op2=p/q;
    printf("La division es:%.2lf\n",op2);
    printf("%.2lf>=%.2lf\n",p,q);
    if (p>=q) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf<=%.2lf\n",p,q);
    if (p<=q) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf>%.2lf\n",p,q);
    if (p>q) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    printf("%.2lf<%.2lf\n",p,q);
    if (p<q) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    printf("\nIngrese un caracter\n");
    fflush(stdin);
    scanf("%c",&c1);
    printf("\nIngrese otro caracter\n");
    fflush(stdin);
	scanf("%c",&c2);
    
    printf("%c == %c",c1,c2);
    if (c1==c2) {
        printf("\nVerdadero\n");
    }
    else {
        printf("\nFalso\n");
    }
    printf("\nIngrese la cadena a mostrar: \n");
    fflush(stdin);
	gets(c);
    printf("\nSu cadenas ingresada es:\n%s",c);
    
    printf("\n\nIngrese un numero\n");
    fflush(stdin);
    scanf("%d",&j);
    printf("\nCompararemos su numero con 10\n");
		
	op3(j);
		cdn=op3(j);
		
		printf("%d>=10\n",j);
    if (cdn==true) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    op4(j);
		cdn=op4(j);
		
    printf("%d<=10\n",j);
    if (cdn==true) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    op5(j);
		cdn=op5(j);
	
    printf("%d>10\n",j);
    if (cdn==true) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
	op6(j);
		cdn=op6(j);
		
    printf("%d<10\n",j);
    if (cdn==true) {
        printf("Verdadero\n");
    }
    else {
        printf("Falso\n");
    }
    
    system("pause");
	return 0;
}
