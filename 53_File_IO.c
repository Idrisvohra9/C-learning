// File is data stored in a storage device. A C program can contact the file by reading content from it and writing content to it.
#include <stdio.h>
int main(){
    FILE *p;// FILE Syntax is used to make a pointer that points to a file.
    p = fopen("menu.txt", "r");// fopen() is a inbuilt file function that opens the file and it takes 2 arguments 
    // 1. The name of the file with its extension and 
    // 2. The permission to read or write
    // p=fopen("menu2.txt", "w");// "w" is used for write mode if the file exists with some text the contents can be overwritten.
    // There is another permission called "a" which appends the text you write in the end. and if the file does not exist it creates the file. Similarly it creates the file in the "w" mode as well.
    if (p== NULL){// NULL is the syntax to check if the file pointer exist or not. This will only work if the file is in the read mode.
        printf("the file does not exist.\n");// What this code block does is checks if the file exists or not.
    }
    else{
        char food1[30], food2[30], food3[30], food4[30];// To find the strings in the file we made a variable that contains the first string of the file.
        

        int price1 , price2 , price3 , price4;// to return the int in the file we are making the int variables to scan and print the int values. In this case prices.
        // The above fscanf and printf statements can also be written as this :
        fscanf(p, "%s %d %s %d %s %d %s %d", &food1, &price1 , &food2, &price2, &food3,&price3, &food4, &price4);// fscanf() works just like scanf() but it scans the file contents. It takes one more argument that scanf() doesn't, that is the file pointer variable at the start.
        // The reason why fscanf scans the elements of the file incrementally is because it doesn't scan a variable that is already been scanned
        printf("%s %d \n%s %d\n %s %d\n %s %d\n",food1, price1 , food2, price2, food3,price3, food4, price4);
        // Output:
        // sizzler 350 
        // sandwich 150
        //  samosa 90
        //  dhokla 50
        fclose(p);// After The working of the file it is a good practice to close the file and that can be done with the syntax fclose(*file pointer).
    }
    return 0;
}