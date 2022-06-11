#include <stdio.h>
int potencia(int exp, int base){
	int res=1, cont;
	for(cont=1; cont<=exp; cont++){		
		res =  base * res;	
	}
	return res;
}
//-------------------------------------------------
int main(){
	int res, exp, base;
	printf("Digite a base e o seu exponte: ");
	scanf("%d%d", &base, &exp);
	res = potencia(exp, base);
	printf("A potencia de %d ^ %d = %d", base, exp, res);
}
