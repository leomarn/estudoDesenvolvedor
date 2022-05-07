#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	//declaração de variáveis do tipo inteiro
	int valor;

	printf("Digite um valor: ");
	scanf("%d", &valor);

	if(valor > 5){
        valor*=2;
        printf("Dobro do valor informado: %d \n", valor);
	}


    printf("\n\n\nPressione qualquer tecla\n");
	getchar();
	return(0);
}
