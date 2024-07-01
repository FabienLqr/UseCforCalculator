#include <stdio.h>
#include <stdlib.h>

int main (){
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);
    for(int i = 0; i<=10; i++){
        printf("%d", x*i);
        printf("\n");
    }
    return 0;
}