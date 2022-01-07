#include <stdio.h>
int main(){
    FILE *pt=fopen("menu.txt","r");
// Here pt means the file pointer of the tageted file from which we will copy contents from.
// And pd means the file pointer of the destination file to which the contents will be pasted.
    char c=fgetc(pt);
    if (pt==NULL){
         printf("The fie is empty.\n");
    }
    else{
         FILE *pd=fopen("menu2.txt","w");
         printf("The copied contents preview : \n");
         while (c!=EOF){
              printf("%c", c);
              fputc(c,pd);
     // fputc() is a stdio.h inbuilt file Operation function that takes 2 arguments first the character variable that reads the pointer to target file and second argument is the pointer to destination file. That will copy paste the content of one file to another.
              c=fgetc(pt);
         }

         fclose(pt);
         fclose(pd);
    }
    return 0;
}