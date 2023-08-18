#include<stdio.h>

int main(){
    long int m, n;
    scanf("%ld\n", &n);
    scanf("%ld\n", &m);

}

long int dois_elevado_a(int n){
    long int aux;
    if(n == 0){
        return 1;
    }
    else if(n % 2){
        aux = dois_elevado_a((n-1)/2);
        return 2*aux*aux;
    }
    else{
        aux = dois_elevado_a(n/2);
        return aux*aux;
    }
} 