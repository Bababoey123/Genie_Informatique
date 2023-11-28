/*
Adam Caulier
09/09/2023

Affiche la chaine de characteres 

commande pour le compiler gcc -Wall -W -std=c99 -S helloworldstr.c -o str.out

executer le programme ./str.out

*/

#include<stdio.h>
#include<string.h>

int main (){

char txt [80];
int num [26];
int rng = 0 ;
int longtxt = 0 ;
printf("Saisissez un texte \n" );   
printf("%s\n", txt );
for (int i = 0 ; i <= 25 ; ++i){   // initialisation du tableau num a 0 
    num[i]= 0 ;
}
longtxt = strlen(txt);
for ( int j = 0 ; j < longtxt ; ++j){
    rng = txt - j ;
    if ( rng >= 0 && rng <=26) {
        num[rng] = num[rng] + 1 ;
    }
}

for ( int l = 0 ; l <=25 ; ++l){
    printf("%i", num[l]);
}





/*char chaine[TAILLE]="Hello,world!" ;

printf("%s\n", chaine );
printf("%li\n", strlen(chaine));


 */
return 0;



}