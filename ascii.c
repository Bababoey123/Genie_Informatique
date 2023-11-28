/*
13/11/2023 
Adam Caulier p2304842
Programme qui affiche le code decimal et le code ascii de chaque lettre majuscule
compiler avec $ gcc -W -Wall -std=c99 ascii.c -o ascii 

executer avec ./ascii 
*/

#include<stdio.h>
#include<stdlib.h>

int ascii =  0x41; 
int main(){
  for (int i = 0 ; i < 26 ; ++i ){
   printf("'%c'", ascii );
   printf (" code dec =  %d     code hexa = %X  \n" ,ascii, ascii);
   ascii = ascii + 1 ;
  }
  return 0 ; 
}