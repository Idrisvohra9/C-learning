#include <stdio.h>
#include <string.h>
int main(){
    FILE *f = fopen("POEM.txt","w");
    char s[90];
    printf("Enter text to reverse: \n");
    while(strlen(gets(s)) > 0){
        fputs(strrev(s),f);
        fputs("\n",f);
    }
    fclose(f);
    return 0;
}