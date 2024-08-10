#include <stdio.h>
#include <string.h>
int main(){
    char input[100];
    int in_n,x;
    printf("Enter a Number: ");
    scanf("%s",&input);
    for(x=0;x<=strlen(input);x++){
    switch(input[x]){
        case '0': printf("zero "); break;
        case '1': printf("one " ); break;
        case '2': printf("two " ); break;
        case '3': printf("three "); break;
        case '4': printf("four " ); break;
        case '5': printf("five "); break;
        case '6': printf("six "); break;
        case '7': printf("seven "); break;
        case '8': printf("eight "); break;
        case '9': printf("nine "); break;
    }
    }
    return 0;
}