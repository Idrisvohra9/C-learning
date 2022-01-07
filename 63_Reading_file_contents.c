#include <stdio.h>
int main(){
    FILE *p;
    p=fopen("menu.txt", "r");//63_Reading_file_contents.c
    char c=fgetc(p);// It gets the character from the file one by one.
    int nol=1, nos=0, noc=0, noi=0, not=0;
    printf("The file content:\n");
    while(c!=EOF){// EOF means end of file.
        printf("%c", c);// And prints it out
        noc++;// It represents number of characters.

        if (c==' ')
        { nos++;}// It represents number of space.

        if (c=='\n')
        { nol++;}//It represents number of Lines.
        c=fgetc(p);// the reason why we need to assign c variable to the fgetc(p) is because when it gets the next character it should be assigned to that character in order to print it.
    }
    printf("\n");
    printf("The number of characters are %d\n", noc);
    printf("The number of spaces are %d\n", nos);
    // printf("The number of tabs are %d\n", not);
    printf("The number of lines are %d\n", nol);
    return 0;
    // read file such as this can read its own contents.
}