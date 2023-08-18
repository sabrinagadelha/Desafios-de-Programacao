#include<stdio.h>
#include<stdlib.h>

int main(){
    double a, b, c, d;
    double termo_inicial1, razao1, soma1, termo_inicial2, razao2, soma2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    termo_inicial1 = a/b;
    razao1 = (1-a/b)*(1-c/d);
    soma1 = termo_inicial1/(1 - razao1);
    termo_inicial2 = (1 - a/b)*c/d;
    razao2 = (1-a/b)*(1-c/d); printf("%lf %lf", a/b, c/d);
    soma2 = termo_inicial2/(1 - razao2);
    printf("%lf %lf %lf", termo_inicial2, razao2, soma2);
    printf("%.12lf %.12lf\n", soma1, soma2);
}