#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("Make.txt","w");// During the making of this program the file Gen.txt doesn't exist but it will be created because the mode is write.
    char sentence1[90], sentence2[90];
    for(int i = 1 ; i <= 10 ; i++ ){
        printf("Enter text: \n");
        scanf("%s",sentence1);
        fprintf(fp,"%s ",sentence1);//So the way it takes the user input is if you Enter 10 spellings in one sentence all the ten loops will be executed at once. Else if you enter 1 spelling at each iteration the loop will keep on telling the user to enter Text until the spelling is equal to 10. It doesn't take spellings less than or more than 10 but Just equal to 10.
    }
    fprintf(fp,"\n");
    fclose(fp);
    return 0;
}