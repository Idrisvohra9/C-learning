// Maximum digits each type can store:
// int: typically 10 digits (−2,147,483,648 to 2,147,483,647)
// long: typically 19 digits (−9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
// long long: typically 19 digits (−9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)

#include <stdio.h>

int main() {
    int smallNumber = 2147483647;         // 10 digits - Maximum for a signed 32-bit int
    long int largeNumber = 9223372036854775807L;     // Up to 19 digits - Maximum for a signed 64-bit long    long long veryLargeNumber = 9223372036854775807; // Up to 19 digits - Maximum for a signed 64-bit long long
    
    printf("Small number (int): %d\n", smallNumber);
    printf("Large number (long): %ld\n", largeNumber);
   //  printf("Very Large number (long long): %lld\n", veryLargeNumber);

    return 0;
}