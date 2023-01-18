#include <stdio.h>
int main(){
    FILE *p=fopen("Make.txt","w");
    int i,j,space,rows;
    printf("Enter the number of rows: \n");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            fprintf(p,"  ");
        }
        for(j=1;j<=(i*2)-1;j++){
            fprintf(p,"* ");
        }
        fprintf(p,"\n");
    }
    return 0;
}