#include <stdio.h>

float pesoIdeal(float alt, int sexo){
	float resultado;
	if(sexo == 0)
		resultado = 62.1 * alt - 44.7;
	else if (sexo == 1)
		resultado =  72.7 * alt - 58;
	return resultado;	 
}
//----------------------------------------------------
int main(){
	float res;
	float alt;
	int sexo;
	printf("Digite o sexo (0/1): ");
	scanf("%d", &sexo);
	printf("Digite a altura: ");
	scanf("%f", &alt);
    res = pesoIdeal(alt, sexo);
	printf("\nPeso ideal: %f", res);
}
