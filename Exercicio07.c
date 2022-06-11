#include <stdio.h>
int soma(int quant){
	int num, soma=0, cont;
	for(cont=1; cont <= quant; cont++){
		printf("Valor %d:",cont);
		scanf("%d", &num);
		soma+=num;
	}
	return soma;
}
//----------------------------------------------------
int main(){
	int res, quant;
	printf("Digite uma certa quantidade: ");
	scanf("%d", &quant);
    res =soma(quant);
	printf("Soma dos valores: %d", res);
}

