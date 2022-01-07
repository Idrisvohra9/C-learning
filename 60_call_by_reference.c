#include <stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main(){
// Call by reference:
// By giving address to the value of the variable in the parameters of a function the value in the main function gets affected. This program shows just that.
    int x=9, y=10;
    printf("The value of x and y before the swap are %d and %d.\n",x,y);
//     wrong_swap(x,y); //This will not work because of call by value.
    swap(&x,&y); // This will work because of call by reference.
    // Note that we have given the address of both the variable in the swap() function.
    printf("The value of x and y after the swap are %d and %d.\n",x,y);
//     So what it does is, we give the address at the time of calling the function and give the access to its value in parameters by placing the "*" asteric before the parameters during prototype and declaration this is called call by reference.
// Thus, although the function is void it changes the values in the main function directly.
    return 0;
}
void swap(int *a, int *b){ //this takes the value at the predefined address that means the its not the copy but its the original value.
     *a = *a + *b;
     *b = *a - *b;
     *a = *a - *b;
     
}
void wrong_swap(int a, int b){
     a = a + b;
     b = a - b;
     a = a - b;
}