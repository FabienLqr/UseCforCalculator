#include <stdio.h>
#include <stdlib.h>

void tri(int *tab){
   for(int i=0; i<5;i++){
        for(int j=0; j<4-i;j++){
            if(tab[j]>tab[j+1]){
                int temp = tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
}

int search(int num, int *tab){
    for(int i=0; i<5; i++){
        if(tab[i]==num){
            return 1;
        }
    }
    return 0;
}

int main(){
    int tableau[5];
    int x;

    printf("Entrer les nombres du tableau dans lequel chercher (5) :");
    for(int i=0; i<5; i++){
        scanf("%d", &tableau[i]);
    }

    printf("Entrer votre nombre a trouver : ");
    scanf("%d", &x);

    tri(tableau);

    printf("Votre tableau qui est trie : ");
    for(int i=0; i<5; i++){
        printf("%d ", tableau[i]);
    }

    printf(" \n Le nombre a chercher est %d \n", x);

    if(search(x, tableau)){
        printf("Votre nombre est dans le tableau trie ! \n");
    }else{
        printf("Votre nombre n'est pas dans le tableau trie");
    }
    return 0;
}