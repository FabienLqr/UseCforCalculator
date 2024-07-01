#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c, d;
    float m;
    printf("Entrer un premier nombre : ");
    scanf("%d", &a);

    printf("Entrer un deuxieme nombre : ");
    scanf("%d", &b);

    printf("Entrer un troisieme nombre : ");
    scanf("%d", &c);

    printf("Entrer un quatrieme nombre : ");
    scanf("%d", &d);

    m = (a+b+c+d)/4.0;

    printf("%2f", m);

    return 0;
}