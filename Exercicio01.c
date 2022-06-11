#include <stdio.h>

int ehPar(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}

int main(){
	int numero;
	printf("Valor: ");
	scanf("%d", &numero);
	if(ehPar(numero)==1)
		printf("eh par");
	else
		printf("nao eh par");
	return 0;
}
