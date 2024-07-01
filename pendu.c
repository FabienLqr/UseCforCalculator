#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* random(char* mots[], int taille) {
    srand(time(NULL));  // Initialiser le générateur de nombres aléatoires
    int index = rand() % taille;  // Générer un index aléatoire
    return mots[index];
}

int main (){
    char* words[11] = {"voiture", "banane", "bois", "guitare", "musique", "programmation", "Metallica", "France", "pendu", "informatique", "langage"};
    char* word = random(words, 11);
    int wrong = 0;

    int length = strlen(word);
    char devine[length+1];
    for(int i=0; i<length; i++){
        devine[i]= '-';
    }
    devine[length] = '\0';
    
    while(wrong<=7 && strcmp(word, devine) != 0){
        char temp[length+1];
        strcpy(temp, devine);
        char lettre;
        printf("Entrer un caractere : ");
        scanf(" %c", &lettre);

        for(int i=0; i<length; i++){
            if(lettre==word[i]){
                devine[i]=lettre;
            }
        }

        if(strcmp(temp, devine) == 0){
            wrong+=1;
        }
        printf("Mot : %s\n", devine);
        printf("Nombre d'erreurs : %d\n", wrong);
    }

    if(wrong>7){
        printf("Desole, vous n'avez pas devine le mot dans le nombre d'erreur impartie");
    }else{
        printf("Felicitation, vous avez trouve le mot ! \n");
    }

    return 0;
}