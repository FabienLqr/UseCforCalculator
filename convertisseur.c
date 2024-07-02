#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fonction pour verifier que l'unite entree existe
int check(char* unite[], char* test, int taille){
    for(int i =0; i<taille; i++){
        if(strcmp(unite[i], test) == 0){
            return i;
        } 
    }
    return -1;
}

// fonction pour convertir une distance
void distance (){
    char uniteBefore[6], uniteAfter[6];
    float numberBefore, numberAfter;

    char *tabUnite[7] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    float tabConversion[7] = {1000, 100, 10, 1, 0.1, 0.01, 0.001};

    printf("Veuillez entrer l'unite de base (compris entre km et mm) : ");
    scanf("%s", uniteBefore);
    int indexBefore = check(tabUnite, uniteBefore, 7);
    if(indexBefore == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Veuillez entrer l'unite que vous souhaitez (compris entre km et mm) : ");
    scanf("%s", uniteAfter);
    int indexAfter = check(tabUnite, uniteAfter, 7);
    if(indexAfter == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Entrer la valeur a convertir");
    scanf("%f", &numberBefore);

    numberAfter = numberBefore * tabConversion[indexBefore] / tabConversion[indexAfter];
    printf("%.2f %s est egal a %.2f %s\n", numberBefore, uniteBefore, numberAfter, uniteAfter);
}

// fonction pour convertir une vitesse
void vitesse(){
    char uniteBefore[6], uniteAfter[6];
    float numberBefore, numberAfter;

    char* tabUnite[3] = {"km/h", "m/s", "mph"};
    float tabConversion[3] = {0.27778, 1, 0.44704};

    printf("Veuillez entrer l'unite de base (km/h, m/s ou mph) : ");
    scanf("%s", uniteBefore);
    int indexBefore = check(tabUnite, uniteBefore, 3);
    if(indexBefore == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Veuillez entrer l'unite final (km/h, m/s ou mph) : ");
    scanf("%s", uniteAfter);
    int indexAfter = check(tabUnite, uniteAfter, 3);
    if(indexAfter == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Entrer la valeur a convertir");
    scanf("%f", &numberBefore);

    numberAfter = numberBefore * tabConversion[indexBefore] / tabConversion[indexAfter];
    printf("%.2f %s est egal a %.2f %s\n", numberBefore, uniteBefore, numberAfter, uniteAfter);
}

// fonction pour convertir une temperature
void temperature(){
    char unit[2];
    float numberBefore, numberAfter;

    printf("Veuillez entrer l'unite de base (C pour celsius ou F pour fahrenheit) : ");
    scanf("%1s", unit);

    if(strcmp(unit, "C")==0){
        printf("Entrer la valeur a convertir");
        scanf("%f", &numberBefore);
        numberAfter = numberBefore*1.8+32;
        printf("%.2f C est egal a %.2f F\n", numberBefore, numberAfter);
    }else if (strcmp(unit, "F")==0){
        printf("Entrer la valeur a convertir");
        scanf("%f", &numberBefore);
        numberAfter = (numberBefore+32)/1.8;
        printf("%.2f F est egal a %.2f C\n", numberBefore, numberAfter);
    }else{
        printf("L'unite entree n'est pas valide");
    }
}

// fonction pour convertir un poids
void poids(){
    int choix;
    float poids, result;

    printf("Choisissez l'unita de poids :\n");
    printf("1. Kilogrammes\n");
    printf("2. Livres\n");
    scanf("%d", &choix);

    printf("Entrez le poids : ");
    scanf("%f", &poids);

    if (choix == 1) {
        result = poids * 2.20462;
        printf("%.2f kilogrammes est egal a %.2f livres\n", poids, result);
    } else if (choix == 2) {
        result = poids/2.20462;
        printf("%.2f livres est egal a %.2f kilogrammes\n", poids, result);
    } else {
        printf("Choix non valide\n");
    }

}


// fonction pour convertir un volume
void volume(){
    char uniteBefore[6], uniteAfter[6];
    float numberBefore, numberAfter;

    char *tabUnite[7] = {"kL", "hL", "daL", "L", "dL", "cL", "mL"};
    float tabConversion[7] = {1000, 100, 10, 1, 0.1, 0.01, 0.001};

    printf("Veuillez entrer l'unite de base (compris entre kL et mL) : ");
    scanf("%s", uniteBefore);
    int indexBefore = check(tabUnite, uniteBefore, 7);
    if(indexBefore == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Veuillez entrer l'unite que vous souhaitez (compris entre kL et mL) : ");
    scanf("%s", uniteAfter);
    int indexAfter = check(tabUnite, uniteAfter, 7);
    if(indexAfter == -1){
        printf("Unite non reconnue\n");
        return;
    }

    printf("Entrer la valeur a convertir");
    scanf("%f", &numberBefore);

    numberAfter = numberBefore * tabConversion[indexBefore] / tabConversion[indexAfter];
    printf("%.2f %s est egal a %.2f %s\n", numberBefore, uniteBefore, numberAfter, uniteAfter);
}

//  fonction main
int main(){
    char* choix[] = {"1: distance", "2: vitesse", "3: temperature", "4: poids", "5: volume"};
    for(int i=0; i<5; i++){
        printf("%s\n", choix[i]);
    }
    int num;
    printf("Entrer le chiffre de la convertion que vous souhaiter faire : ");
    scanf("%d", &num);

    if(num == 1){
        distance();
    }else if(num == 2){
        vitesse();
    }else if(num == 3){
        temperature();
    }else if(num == 4){
        poids();
    }else if(num == 5){
        volume();
    }else{
        printf("Vous n'avez pas selectionne un numero valide.");
    }
    return 0;
}