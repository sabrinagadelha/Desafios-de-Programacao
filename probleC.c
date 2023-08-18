#include<stdio.h>

int main(){
    long int numero_de_bac, numero = 0;
    scanf("%ld", &numero_de_bac);
    while(numero_de_bac >= 1){
        if(numero_de_bac % 2 == 1){
            numero += 1;
        }
        numero_de_bac = numero_de_bac/2;
    }
    printf("%d\n", numero);
}