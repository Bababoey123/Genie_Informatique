/*
Adam Caulier
09/09/2023

Convrtisseur Celcius en Farenheit 

commande pour le compilateur ==> gcc -W -std=c99 cel2far.c -o a.out

executer le programme ==> ./a.out

*/

#include<stdio.h>

int main (){

float farenheit = 0; //Initialistion de la variable farenheit 
float celcius = 0;
printf("Celcius to Farenheit converter\n");


printf("Input a value in Celcius :....\n");

scanf("%f", &celcius);

farenheit = celcius * 1.8;
farenheit = farenheit + 32;



printf("%f\n", farenheit);
return 0;



}