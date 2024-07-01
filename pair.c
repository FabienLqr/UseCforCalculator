#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);

    if(x%2==0){
        printf("Votre nombre est pair");
    }else{
        printf("Votre nombre est impair");
    }

    return 0;
}