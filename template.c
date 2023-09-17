/*
Adam Caulier
09/09/2023

template 

3
commande pour le compiler gcc -W -std=c99 template.c -o a.out

executer le programme ./a.out

*/

#include<stdio.h>

int main (){

float HT = 0 ;
float TVA = 0 ;
float impotHT = 0 ; 

printf("Calculateur de prix TCC\n");
printf("Veuillez saisir un prix\n");

scanf("%f", &HT);

if( HT < 0 ){
    printf("ERREUR FATALE!!!!!\n");
    return 0 ;
}

impotHT = HT * 0.2;
TVA = HT + impotHT ;


printf("Prix TCC ====>  %f \n", TVA );
return 0;




}