#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num, guess, nguess=1;
    srand(time(0));
    num = rand()%100+1;
    do{
        printf("Guess The number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess<num)
        {
            printf("Higher number please..\n");
        }
        else if (guess>num)
        {
            printf("Lower number please..\n");
        }
        else{
            printf("Correct! the number is %d.\n",num);
            printf("You guessed The number in %d Attempts\n",nguess);
        }
        nguess++;
    }while(guess!=num);
    return 0;
}