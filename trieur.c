#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[5];

    for(int i=0; i<5; i++){
        scanf("%d", &tab[i]);
    }

    for(int i=0; i<5;i++){
        for(int j=0; j<5-i;j++){
            if(tab[j]>tab[j+1]){
                int temp = tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        printf("%d ", tab[i]);
    }
    return 0;
}