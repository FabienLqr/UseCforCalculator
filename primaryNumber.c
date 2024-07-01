#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, count = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &x);

    for(int i=1; i<=x;i++){
        if(x%i==0){
            count+=1;
        }
    }
    if(count==2){
        printf("Votre nombre est un nombre premier ! \n");
    }else{
        printf("Votre nombre n'est pas un nombre premier ! \n");
    }
    return 0;
}