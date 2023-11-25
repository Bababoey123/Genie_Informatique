#include<stdio.h>
#include<math.h>
#define MAX_N = 10 

float factoriel (int i){
float facti = 1;
for ( int j =  1 ; j <= i ; ++j ){
    facti = facti * j ; 
    
    
} 
return facti ; 
facti =1 ;
}
int main (){
float e  = 1; 
int x  = 1 ;
printf("Veuillez saisir x :");
scanf("%i", &x);
for ( int i = 0 ; i <= 10 ; ++i){
  e = e  + pow(x, i)/factoriel(i);

}
printf("e = %f \n", e);
}
