#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1;
	float n2;
	float soma;
	float sub;
	float multi;
	float divi;
	n1=0;
	n2=0;
	
	printf("Digite um numero:");
	scanf("%f",&n1);
	printf("Digite outro numero:");
	scanf("%f",&n2);
	
	soma=n1+n2;
	sub=n1-n2;
	multi=n1*n2;
	divi=n1/n2;
	
	
	
	printf("%f + %f e igual a %f",n1,n2,soma);
	printf("\n%f - %f e igual a %f",n1,n2,sub);
	printf("\n%f x %f e igual a %f",n1,n2,multi);
	printf("\n%f : %f e igual a %f\n",n1,n2,divi);
	
	system("pause");
	return 0;
}
