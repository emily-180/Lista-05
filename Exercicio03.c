#include <stdio.h>
int fatorial(int num){
	int fat=1, cont;
	for(cont=1; cont<=num; cont++){
		fat = fat * cont;
	}
	return fat;
}
int main(){
	int res, num;
	scanf("%d", &num);
	res = fatorial(num);
	printf("Resultado: %d", res);
}
