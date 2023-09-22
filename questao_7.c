#include <stdio.h>
#include <stdlib.h>

int testa_perfeito(int num){
    int soma_dos_divisores = 0;

    if(num == 0){  
        return 0;
    }

    for(int i = 1; i < num; i++){
        if((num%i) == 0){
            soma_dos_divisores+=i;
        }
    }

    if(soma_dos_divisores == num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int numeros[10];
    int numero_perfeito;
    int qtd_de_perfeitos = 0;
    int maior = 0;
    int menor = 0;
    int somador_dos_perfeitos = 0;

    for(int i = 0; i < 10; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\nA) Quais numeros sao perfeitos? ");

    for(int i = 0; i < 10; i++){
        numero_perfeito = testa_perfeito(numeros[i]);

        if(numero_perfeito){
            printf("%d  ", numeros[i]);
            qtd_de_perfeitos++;
            somador_dos_perfeitos+=numeros[i];

            if(qtd_de_perfeitos == 1){
                maior = numeros[i];
                menor = numeros[i];
            }else{
                if(numeros[i] > maior){
                    maior = numeros[i];
                }else{
                    menor = numeros[i];
                }
            }
        }
    }

    if(qtd_de_perfeitos == 0){
        printf("Nao teve");  

        printf("\n\nB) Quantos sao perfeitos? Nenhum");

        printf("\n\nC) O maior numero perfeito? Nenhum");

        printf("\n\nD) O menor numero perfeito? Nenhum");      

        printf("\n\nE) Somatorio dos numeros perfeitos? Nenhum");
    }else{
        printf("\n\nB) Quantos sao perfeitos? %d", qtd_de_perfeitos);

        printf("\n\nC) O maior numero perfeito? %d", maior);

        printf("\n\nD) O menor numero perfeito? %d", menor);

        printf("\n\nE) Somatorio dos numeros perfeitos? %d", somador_dos_perfeitos);
    }
    printf("\n\n");

    return 0;
}