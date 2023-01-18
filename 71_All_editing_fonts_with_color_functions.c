#include <stdio.h>
// Black:-
void blackD(){ // Default
    printf("\033[0;30m");
}
void blackB(){ // Bold
    printf("\033[1;30m");
}
void blackL(){ // Light
    printf("\033[2;30m");
}
void blackI(){ // Italics
    printf("\033[3;30m");
}
void blackU(){ // Underline
    printf("\033[4;30m");
}
void blackS(){ // Strikethrough
    printf("\033[9;30m");
}
// Red:-
void redD(){ // Default 
    printf("\033[0;31m");
}
void redB(){ // Bold
    printf("\033[1;31m");
}
void redL(){ // Light
    printf("\033[2;31m");
}
void redI(){ // Italics
    printf("\033[3;31m");
}
void redU(){ // Underline
    printf("\033[4;31m");
}
void redS(){ // Strikethrough
    printf("\033[9;31m");
}

// Green:-
void greenD(){
    printf("\033[0;32m");
}
void greenB(){
    printf("\033[1;32m");
}
void greenL(){
    printf("\033[2;32m");
}
void greenI(){
    printf("\033[3;32m");
}
void greenU(){
    printf("\033[4;32m");
}
void greenS(){
    printf("\033[9;32m");
}

// Yellow:-
void yellowD(){
    printf("\033[0;33m");
}
void yellowB(){
    printf("\033[1;33m");
}
void yellowL(){
    printf("\033[2;33m");
}
void yellowI(){
    printf("\033[3;33m");
}
void yellowU(){
    printf("\033[4;33m");
}
void yellowS(){
    printf("\033[9;33m");
}

// Blue:-
void blueD(){
    printf("\033[0;34m");
}
void blueB(){
    printf("\033[1;34m");
}
void blueL(){
    printf("\033[2;34m");
}
void blueI(){
    printf("\033[3;34m");
}
void blueU(){
    printf("\033[4;34m");
}
void blueS(){
    printf("\033[9;34m");
}

// Magenta:-
void magentaD(){
    printf("\033[0;35m");
}
void magentaB(){
    printf("\033[1;35m");
}
void magentaL(){
    printf("\033[2;35m");
}
void magentaI(){
    printf("\033[3;35m");
}
void magentaU(){
    printf("\033[4;35m");
}
void magentaS(){
    printf("\033[9;35m");
}

// Cyan:-
void cyanD(){
    printf("\033[0;36m");
}
void cyanB(){
    printf("\033[1;36m");
}
void cyanL(){
    printf("\033[2;36m");
}
void cyanI(){
    printf("\033[3;36m");
}
void cyanU(){
    printf("\033[4;36m");
}
void cyanS(){
    printf("\033[9;36m");
}
// Grey:-
void greyD(){
    printf("\033[0;90m");
}
void greyB(){
    printf("\033[1;90m");
}
void greyL(){
    printf("\033[2;90m");
}
void greyI(){
    printf("\033[3;90m");
}
void greyU(){
    printf("\033[4;90m");
}
void greyS(){
    printf("\033[9;90m");
}
void reset(){
    printf("\033[0;0m");
}
int main(){
    blackD(); printf("I ");
    greenD(); printf("a");
    blackI(); printf("m ");
    yellowS(); printf("I");
    blackB(); printf("d");
    greenI(); printf("r");
    greyL(); printf("i");
    yellowI(); printf("s ");
    redU(); printf("V");
    greyS(); printf("o");
    cyanD(); printf("h");
    magentaU(); printf("r");
    blueS(); printf("a");
    magentaB(); printf("!");
    reset();
    return 0;
}