#include <stdio.h>
#include <stdlib.h>

int numeros_primos(int x, int y){
    int menor, maior;
    int qtd_de_primos = 0;
    int qtd_de_divisores = 0;

    if(x < y){
        maior = y;
        menor = x;
    }else{
        menor = y;
        maior = x;
    }

    for(int i = menor; i <= maior; i++){
        for(int j = 1; j <= i; j++){
            if((i%j) == 0){
                qtd_de_divisores++;
            }
        }
        if(qtd_de_divisores == 2){
            qtd_de_primos++;
            printf("\nPrimo: %d", i);
        }
        qtd_de_divisores = 0;
    }

    return qtd_de_primos;
}

int main(){
    int x, y, primos_existentes;
    

    printf("\nDigite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    primos_existentes = numeros_primos(x, y);

    printf("\nHa %d primo(s) entre eles.", primos_existentes);

    return 0;
}