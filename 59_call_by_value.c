#include <stdio.h>
int sum(int a, int b);
int main(){
// Call by value:
// When we pass values in parameters of a function the value of the main function doesn't change. this program shows just that.
// So what happens is only the copy of the values go to the parameters in the other function and the main values stays constant this is called call by value.
// In c we usually make call by value.
    int x=6, y=5;
    printf("The value of x and y are %d & %d\n", x, y);// Output: 6 5
    printf("x + y = %d\n",sum(x,y));// Output : 11
    sum(x,y);
    printf("The value of x and y after the function are %d & %d\n", x, y);// Output : 6 5
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    a=888;
    b=909;
    return c;
}