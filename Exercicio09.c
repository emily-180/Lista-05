#include <stdio.h>
float boletim(float n1, float n2, float n3, int freq){
	int resultado, media;
	media = (n1+n2+n3)/3;
	if(media >= 6 && freq >= 75)
		return 1;
	else if (media < 6 &&  media >= 4 && freq >= 75)
		return 2;
	else if (media < 4 && freq < 75)
		return 3;	 
}
//----------------------------------------------------
int main(){
	float res, n1, n2, n3;
	int freq;
	printf("Digite nota 1, 2, 3 e frequencia: ");
	scanf("%f%f%f%d", &n1, &n2, &n3, &freq);
    res = boletim(n1, n2, n3, freq);
    if(res == 1)
    	printf("\nAprovado");
    else if(res == 2)
    	printf("\nRecuperacao");
    else if(res == 3)
    	printf("\nReprovado");
}
