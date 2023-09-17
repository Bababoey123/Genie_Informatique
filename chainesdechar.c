/*
Adam Caulier
09/09/2023

chainesdechar : saisie avec scanf et gets 

Saisir et afficher des characteres avec scanf et gets

boucle while ===> vider le tampon

commande pour le compiler gcc -W -std=c99 chainesdechar.c -o ch2c.out

executer le programme ./ch2c.out

*/

#include<stdio.h>
#define TAILLE 8

int main (){


char ch_1[TAILLE] = "", ch_2[TAILLE] = "";

printf("Saisir un mot 1\n");
scanf("%s", ch_1);

while(getchar() !='\n');

printf("%s\n", ch_1);
printf("\n");

printf("Saisir un mot 2\n");

fgets(ch_1, 8, stdin);
printf("%s\n", ch_1);

return 0;




}