/*
Test de la fonction comparateur de tableax 
compiler avec :
gcc comparerTableaux.c -A  

Executer avec:
./compTab.o

*/
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define  N  100  

int8_t comparerTableaux(int *T1, int *T2 ){
    int8_t res = 1;
    for (int i=0 ; i <= sizeof(T1);++i){
        if (T1[i] != T2[i] ){
            res = 0; 
        }
    } 
    return res ; 
}

int main (){
    int TailleT1 = 0;
    int TailleT2 = 0;
    int flag = 1; 

    int T1[N] = {0};
    int T2[N] ={0};

    printf("Veuiller entrer la taille de premier tableau:  ");
    scanf("%d", &TailleT1);
    while(getchar()!='\n');
    
    printf("Veuiller entrer la taille du deuxieme tableau:  ");
    scanf("%d", &TailleT2);
    while(getchar()!='\n');

    T1[0]=TailleT1;
    T2[0]=TailleT2;

    flag = comparerTableaux(T1, T2);

    printf("%d \n", flag);

    return 0 ; 
}

