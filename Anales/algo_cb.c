#include <stdio.h>
#include<string.h>
#define TAILLE 17 

int t, ctrl, i, valid ;
int cb[TAILLE];

int main (){

    printf( "Saisir numero de carte bancaire  " );
    scanf("%16ls", cb);
    ctrl = 0 ;

    for ( i = 0 ; i <= 14 ; ++i){

        t = ( cb[i] - '0') * 2 ;
        ctrl = ctrl + cb[i+1] + (t/10) + (t%10);
      
    }
    if( (ctrl%10) == 0){
        valid = 1 ; 
    }
    else{
        valid = 0 ; 
    }
    if( valid == 1){
        printf( "Numero OK \n  " ); 
    }
    else{
        printf( " Numero %ls invalide  \n ", cb );
    }

return 0 ;
}