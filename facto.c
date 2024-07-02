#include <stdio.h>
#include <stdlib.h>

int main (){
    int number;
    double result = 1;
    printf("Entrer un entier : ");
    scanf("%d", &number);

    if(number==0){
        printf("La factorielle de 0 est 1.");
    }else{
        for(int i=1; i<=number; i++){
            result*=i;
        }
        printf("La factorielle de %d est %lf\n", number, result);
    }
}