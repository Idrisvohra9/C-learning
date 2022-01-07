#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("Gen.txt","w");// During the making of this program the file Gen.txt doesn't exist but it will be created because the mode is write.
    int n=786;
    fprintf(fp,"My favorite number is %d\n",n);// Note: fprintf() takes first argument as the file pointer. An prints whatever you want it to print in a file.
    fclose(fp);
    return 0;
}