#include <stdio.h>
#include <stdlib.h>

void tri(int *tab, int taille){
   for(int i=0; i<taille;i++){
        for(int j=0; j<taille-1-i;j++){
            if(tab[j]>tab[j+1]){
                int temp = tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
}

int search(int num, int *tab, int taille){
    for(int i=0; i<taille; i++){
        if(tab[i]==num){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    printf("Quelle taille pour votre tableau ?");
    scanf("%d", &t);
    int tableau[t];
    int x;

    printf("Entrer les nombres du tableau dans lequel chercher (%d) :", t);
    for(int i=0; i<t; i++){
        scanf("%d", &tableau[i]);
    }

    printf("Entrer votre nombre a trouver : ");
    scanf("%d", &x);

    tri(tableau, t);

    printf("Votre tableau qui est trie : ");
    for(int i=0; i<t; i++){
        printf("%d ", tableau[i]);
    }

    printf(" \n Le nombre a chercher est %d \n", x);

    if(search(x, tableau, t)){
        printf("Votre nombre est dans le tableau trie ! \n");
    }else{
        printf("Votre nombre n'est pas dans le tableau trie");
    }
    return 0;
}