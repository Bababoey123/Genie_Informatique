/*
Adam Caulier
15/09/2023

Callculateur de TVA en fonction d'un prix donne 

commande pour le compilateur gcc -Wall -W -std=c99  TVA.c -o TVA

executer le programme ./TVA

*/

#include<stdio.h>

int main (){

float prixHT;
float prixTCC;
float TVAprix;

printf("Calculateur de prix avec taxe \n");
printf("Le taux normal de la TVA est de 20 % \n");
printf("Veuillez enter un prix hors-taxe   \n");

printf("PrixHT = .....  \n");
scanf("%f", &prixHT);

TVAprix = prixHT * 0.2 ;
prixTCC = prixHT + TVAprix ;

printf("Prix TCC = %f \n", prixTCC);

return 0;



}