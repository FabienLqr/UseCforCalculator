#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;

    printf("Quelle taille pour votre tableau ? ");
    scanf("%d", &t);

    int tableau[t];

    printf("Entrer les nombres du tableau dans lequel chercher (%d) :\n", t);
    for(int i=0; i<t; i++){
        scanf("%d", &tableau[i]);
    }

    int x;
    printf("Entrer le multiple : ");
    scanf("%d", &x);
    printf("Vous allez afficher tout les multiple de %d de votre tableau rentre precedemment.\n", x);

    for(int i=0; i<t; i++){
        if(tableau[i]%x==0){
            printf("%d ", tableau[i]);
        }
    }

    return 0;
}