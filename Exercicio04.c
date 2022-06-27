#include <stdio.h>
int fibonacci(int quant){
	int res, ant=1, atual=1, cont;
	printf("%d\n", ant);
	res= atual;
	for(cont=1; res < quant; cont++){	
		printf("%d\n", res);
		res = atual + ant ;
		ant = atual;
		atual = res;
	}
	
}
//----------------------------------------------------
int main(){
	int res, quant;
	printf("Digite a quantidade: ");
	scanf("%d", &quant);
	res = fibonacci(quant);
	printf("%d",res);
}
