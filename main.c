#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    char operateur;

    printf("Entrez votre premier nombre :");
    scanf("%lf", &num1);
    printf("Entrez votre operateur : ");
    scanf("%s", &operateur);
    printf("Entrez votre second nombre :");
    scanf("%lf", &num2);

    if(operateur=='+'){
        printf("= %f", num1+num2);
    }else if(operateur=='-'){
        printf("= %f", num1-num2);
    }else if(operateur=='/'){
        if(num2!=0){
            printf("= %f", num1/num2);
        }else{
            printf("Nous ne pouvons pas diviser par 0");
        }
    }else if(operateur=='*'){
        printf("= %f", num1*num2);
    }else{
        printf("Une erreur de saisis");
    }
    
    return 0;
}