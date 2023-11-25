#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define TAILLE_L 3
#define TAILLE_C 3 


void gs ( int l, int c , float mat[l][c]){
    int acc = 0 ; 
    for (int i = 0 ; i < l  ; ++ i){
        for ( int j = 0 ; j < c ; ++j){
            acc =0 ;
            for (int k = 0 ; k < c ; ++k){
                    acc = acc + mat[i][k]*mat[j][k];
            }
            for (int k = 0 ; k < c ; ++k){
                mat[i][k]= mat[i][k] - acc*mat[j][k];
            }
        }
        acc = 0 ;
        for ( int k = 0 ; k < c ; ++k){
        acc = acc + mat[i][k]*mat[i][k];
        }
        acc = sqrt(acc);
        for (int k = 0 ; k < c ; ++k){
            mat[i][k]= mat[i][k]/acc ;
        }
    }

    
    
}

int main (){
 int l = TAILLE_L ;
 int c = TAILLE_C ;
 float  mat[TAILLE_L][TAILLE_C] = {{1,2,3}, {4,5,6}, {7,8,9}};
 gs(l , c, mat);
 for ( int i = 0 ; i < l ; ++i){
    for ( int j = 0 ; j < c ; ++j){
        printf("%f   ", mat[i][j]);
    }
    putchar('\n');
 }
 return 0 ;
}