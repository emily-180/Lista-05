#include <stdio.h>
double pesoIdeal(double alt, char sexo){
	int resultado;
	if(sexo && "F")
		return resultado = 62.1 * alt - 44.7;
	else if (sexo && "M")
		return resultado =  72.7 * alt - 58;	 
}
//----------------------------------------------------
int main(){
	int res;
	double alt;
	char sexo;
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	printf("Digite a altura: ");
	scanf("%lf", &alt);
    res = pesoIdeal(alt, sexo);
	printf("\nPeso ideal: %lf", res);
}
