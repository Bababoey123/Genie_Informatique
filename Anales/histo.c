#include<stdio.h>
#include<string.h>

#define V_MIN 0 
int a, b, c, d = 0 ;

int main(){

   printf(" Saisir 4 entiers \n ");
   scanf("%i,  %i,  %i, %i  ", &a, &b, &c, &d );
   if ( a == 0 || d == 0 || c == 0 || b == 0  ){
        printf(" entiers diffferents de 0  \n ");
        return 0; 
   }
   for ( int i = 1 ; i <= a ; ++i  ) {
       printf("=");
   /*if ( mot[i] != mot[lg -1 - i]){
        flag = 0 ; 
        break ; 
        */ 
      
    }
     printf("\n ");
    for ( int i = 1 ; i <= b ; ++i  ) {
       printf("=");
   /*if ( mot[i] != mot[lg -1 - i]){
        flag = 0 ; 
        break ; 
        */ 
       
    } 
     printf("\n ");
    for ( int i = 1 ; i <= c ; ++i  ) {
       printf("=");
   /*if ( mot[i] != mot[lg -1 - i]){
        flag = 0 ; 
        break ; 
        */ 
       
    }
     printf("\n ");
    for ( int i = 1 ; i <= d ; ++i  ) {
       printf("=");
   /*if ( mot[i] != mot[lg -1 - i]){
        flag = 0 ; 
        break ; 
        */ 
       
    }
     printf("\n ");






/*
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
  */
 return 0 ;
}