#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int d;
    printf("Entre com um valor: ");
    scanf("%d", &d);
    return 0;

    if(d > 3){
        d=d+3;
        printf("%d", d);
    }
}
