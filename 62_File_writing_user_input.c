#include <stdio.h>
#include <string.h>
int main( ) 
{ 
    FILE *fp ; 
    char s[80] ;
    fp = fopen ( "POEM.TXT", "w" ) ; 
    if ( fp == NULL ) 
    { 
    puts ( "Cannot open file" ) ; 
    fclose ( fp ) ;
    }
    printf ( "\nEnter a few lines of text:\n" ) ;
    
    while ( strlen (gets(s)) > 0 )
    // gets(s) works just like scanf and takes the user input but it works only for string.
    // This means that while the length of string s is more than 0 do these: and gets(s) means also scans the string entered by the user.
    // And thus this program will terminate when the characters in the string are equal to 0 meaning only by pressing enter on a new line.  
    {
    fputs ( s, fp ) ;// fputs() should be used when dealing with strings and files for the output of strings. And for another data type fprintf can be used but fputs has proven more efficient.
    fputs ( "\n", fp ) ;// this is for new line after every sentence
    }
    fclose ( fp ) ;
}