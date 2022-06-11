#include <stdio.h>
int ehPrimo(int num){
	int res, cont, primo = 1;
	for(cont=2; cont < num; cont++){
		if(num%cont == 0){
			primo = 0;
			break;
		}
	}
	return primo;
}
//----------------------------------------------------
int main(){
	int res, num, quant, cont, quantP=0;
	printf("Digite uma certa quantidade: ");
	scanf("%d", &quant);
	for(cont = 1; cont <= quant; cont++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		res = ehPrimo(num);
		if (res == 1)
			quantP++;
	}
	printf("Quantidade numero primos: %d", quantP);
}
