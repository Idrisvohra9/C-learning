#include <stdio.h>
#include <string.h>
void dup(char sub[],float m[]){
    int duplicates=0;
    for(int i=0;i<5;i++){
        if(m[i]==m[i+1] || m[i]==m[i+2] || m[i]==m[i+3] || m[i]==m[i+4] || m[i]==m[i+5]){
            duplicates++;
        }
    }
    if(duplicates==0){
        printf("No duplicates found.");
    }
    else
    printf("Duplicates = %d\n", duplicates);
}
void sep(char sub[],float m[]){

    printf("ATTENTION THE NUMBERING OF POSITION STARTS FROM 0\n");
    printf("EVEN POSITOINS : \n");
    printf("%c :",sub[0]);
    printf("%f\n",m[0]);
    for(int i = 1; i < 5 ; i++){
        if(i%2 == 0){
            printf("%c :",sub[i]);
            printf("%f\n",m[i]);
        }
    }
    printf("ODD POSITOINS : \n");
    for(int i = 0; i < 5 ; i++){
        if(i%2 != 0){

            printf("%c :",sub[i]);
            printf("%f\n",m[i]);
        }
    }
}


void rev(char sub[],float m[]){
    printf("Reverse : \n");
    for(int i = 4 ; i >= 0 ; i--){
        printf("%c :",sub[i]);
        printf("%f\n",m[i]);
    }
}

void main(){

    float m[5] , sum = 0;
    char subjects[] = {'M','E','S','H','G'} ;
    printf("M = Maths\nE = English\nS = Science\nH = Hindi\nG = Gujarati\n");
    printf("\nEnter marks\n");
    for(int i = 0; i < 5 ; i++){
        printf("%C : ",subjects[i]);
        scanf("%f",&m[i]);
        printf("\n");

    }
    printf("\n\n");

    for(int i = 0; i < 5 ; i++){
        sum = sum + m[i] ;
        printf("%C : ",subjects[i]);
        printf("%f\n",m[i]);
    }
    printf("\n\n");
    float average = sum/5 ;
    printf("Average = %f",average);
    printf("\n\n");
    rev(subjects,m);
    printf("\n\n");
    sep(subjects,m);
    printf("\n\n");
    dup(subjects,m);
}