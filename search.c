#include <stdio.h>
#include <stdlib.h>

int search(int num){
    int tab[5]= {45, 5, 74, 6, 7};
    for(int i=0; i<5; i++){
        if(tab[i]==num){
            return 1;
        }
    }
    return 0;
}

int main(){
    int x;
    printf("Entrez votre nombre : ");
    scanf("%d", &x);

    if(search(x)==1){
        printf("Votre nombre est dans le tableau");
    }else{
        printf("Votre nombre n'est pas dans le tableau");
    }
    return 0;
}