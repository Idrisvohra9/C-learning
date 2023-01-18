#include <stdio.h>
void redfilled(){
    printf("\033[31;41m");
}
void yellowfilled(){
    printf("\033[33;43m");
}
void greenfilled(){
    printf("\033[32;42m");
}
void bluefilled(){
    printf("\033[34;44m");
}
void magentafilled(){
    printf("\033[35;45m");
}
void cyanfilled(){
    printf("\033[36;46m");
}
void whitefilled(){
    printf("\033[37;47m");
}
void blackfilled(){
    printf("\033[30;40m");
}
void greyfilled(){
    printf("\033[90;100m");
}
void reset(){
    printf("\033[0;0m");
}
int main(){
    redfilled();
    printf("Idris");

    yellowfilled();
    printf("Idirs");

    greenfilled();
    printf("Idris");

    bluefilled();
    printf("Idris");

    magentafilled();
    printf("Idris");

    cyanfilled();
    printf("Idris");

    whitefilled();
    printf("Idris");

    reset();
    return 0;
}