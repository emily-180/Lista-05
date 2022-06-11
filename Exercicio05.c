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
	int res, num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	res = ehPrimo(num);
	if (res == 0)
		printf("nao eh primo");
	else
		printf("eh primo");
}
