/*
Adam Caulier
09/09/2023

template 

Saisir et afficher des characteres  
commande pour le compiler gcc -W -std=c99 template.c -o a.out

executer le programme ./a.out

*/

#include<stdio.h>
#define TAILLE 80

int main (){

char ch_1[TAILLE], ch_2[TAILLE];

printf("Saisir un mot 1\n");
scanf("%s", ch_1);
printf("%s\n", ch_1);

printf("Saisir un mot 2\n");
scanf("%s", ch_1);
printf("%s\n", ch_1);

return 0;




}