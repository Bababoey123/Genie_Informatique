/*
Test de la fonction comparateur de tableax 
compiler avec :
gcc dupliquerInverser.c -A  

Executer avec:
./a.out

*/

#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>

int* dupliquerInverserTableau(int *T1){
    int TailleT2 = sizeof(T1) ;
    int tmp ;
    int* T2 ; 
    T2 =(int *)malloc(TailleT2*sizeof(int));

    if (T2 == NULL  ) {
     printf("Memory not allocated.\n");
     return 0;
    }
    for(int i = 0 ; i<TailleT2 ; ++i){
        tmp = T1[i];
        T2[TailleT2-i]= tmp ; 
    }
    return T2 ;
}

int main(){
int* T1 ;
int* T2 ; 
int TailleT1 = 0 ;

printf("Veuillez entrer la taille de premier tableau:  ");
scanf("%d", &TailleT1);
while(getchar()!='\n');
printf("%d", TailleT1);
T1 =(int*)malloc(TailleT1*sizeof(short));


if (T1 == NULL  ) {
     printf("Memory not allocated.\n");
     return 0;
}

printf("Veuillez entrer %d chiffres dans le tableau ( avec la premier chiffre 0):  ", TailleT1-1);
for(int i =0 ; i <= TailleT1; ++i){
    scanf("%d", &T1[i]);
    while(getchar()!='\n');
}

printf("Memoire alouee :3 \n ");
T1[0]= TailleT1; 

for(int i =0 ; i <= TailleT1; ++i){
    printf("%d", T1[i]);
}
putchar('\n');

T2 = dupliquerInverserTableau(T1);

for(int i =0 ; i <= sizeof(T2); ++i){
    printf("%d", T2[i]);
    
}
putchar('\n');
printf("%ld \n", sizeof(T1));
printf("%ld \n", sizeof(T2));
free(T1);
free(T2);
putchar('\n');
return 0 ; 
}
