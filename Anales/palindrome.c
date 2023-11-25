#include<stdio.h>
#include<string.h>
#define TAILLE 50 
int t, i, ctrl, valid, lg = 0 ;
int flag = 1 ; 
char mot[TAILLE] = {'0'} ;
int main(){

   printf(" Saisir un mot \n ");
   scanf("%s", mot );
   flag = 1  ;
   lg = strlen(mot) ;

   for ( int i = 0 ; i <= lg/2 ; ++i  ) {

    if ( mot[i] != mot[lg -1 - i]){
        flag = 0 ; 
        break ; 
    }
   }
 if ( flag == 0){
        printf(" Le mot n'est pas palindrome \n ");
 }
 else {
        printf(" Le mot est palindrome \n ");
  }
 return 0 ;
}