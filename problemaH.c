#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, quantidade = 1;
    scanf("%d\n", &n);
    int vetor[n-1], vetor_resposta[n];
    for(int i=0; i<(n-1); i++){
        scanf("%d", &vetor[i]);
    }
    int ligacao = n;
    vetor_resposta[0] = n;
    while(ligacao > 1){
         vetor_resposta[quantidade] = vetor[ligacao-2];
         ligacao = vetor[ligacao-2];
         quantidade += 1;
    }
    vetor_resposta[quantidade - 1] = 1;
    for(int i; i<quantidade; i++){
         printf("%d ", vetor_resposta[quantidade - i - 1]);
    }
}