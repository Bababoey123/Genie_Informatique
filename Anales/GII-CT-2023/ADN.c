<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#define TAILLE 80 

char seq[TAILLE] = {'0'};
char cseq[TAILLE] ={'0'};
void complementer ( char seq[], char cseq[]){
    for (int i = 0 ; i < (int)strlen(seq) ; i++){
        if(seq[i]== 'A'){
            cseq[i] = 'T';
        }
         if(seq[i]== 'C'){
            cseq[i] = 'G';
        }
         if(seq[i]== 'G'){
            cseq[i] = 'C';
        }
         if(seq[i]== 'T'){
            cseq[i] = 'A';
        }
       
    }
}
void repeter ( char c , int N ){
    for ( int i = 0 ; i<N ; i++){
        putchar(c);
    }
    putchar('\n');
}
int main(){
    printf("Veuillez enter une sequence ADN : ");
    scanf("%s", seq);
    printf("%s \n", seq);
    repeter('|', (int)strlen(seq));
    complementer(seq, cseq);
    printf("%s\n", cseq);
=======
#include<stdio.h>
#include<string.h>
#define TAILLE 80 

char seq[TAILLE] = {'0'};
char cseq[TAILLE] ={'0'};
void complementer ( char seq[], char cseq[]){
    for (int i = 0 ; i < (int)strlen(seq) ; i++){
        if(seq[i]== 'A'){
            cseq[i] = 'T';
        }
         if(seq[i]== 'C'){
            cseq[i] = 'G';
        }
         if(seq[i]== 'G'){
            cseq[i] = 'C';
        }
         if(seq[i]== 'T'){
            cseq[i] = 'A';
        }
       
    }
}
void repeter ( char c , int N ){
    for ( int i = 0 ; i<N ; i++){
        putchar(c);
    }
    putchar('\n');
}
int main(){
    printf("Veuillez enter une sequence ADN : ");
    scanf("%s", seq);
    printf("%s \n", seq);
    repeter('|', (int)strlen(seq));
    complementer(seq, cseq);
    printf("%s\n", cseq);
>>>>>>> f9d82dab023d6231e44ff5cb4a7ddbef7d9d901f
}