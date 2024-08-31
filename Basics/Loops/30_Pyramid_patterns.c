//1st the simple star pyramid.
// #include <stdio.h>
// int main(){
//     int x,space,symbol;
//     for (x= 1 ; x <= 5 ; x++)
//     {
//         for(space= 1; space <= 5 - x ; space++)
//             printf("  ");
//         for(symbol= 1 ; symbol <= (x*2)-1 ; symbol++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
////////////////////////////////////////////////////////////////////////////////////////////////
// // 2nd number pyramid.
// #include <stdio.h>
// int main(){
//     int x,space,symbol,num=1;
//     for (x= 1 ; x <= 5 ; x++)
//     {
//         for(space= 1; space <= 5 - x ; space++)
//             printf("  ");
//         for(symbol= 1 ; symbol <= (x*2)-1 ; symbol++)
//         {
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
//         1 
//       2 3 4 
//     5 6 7 8 9 
//   10 11 12 13 14 15 16
// 17 18 19 20 21 22 23 24 25
////////////////////////////////////////////////////////////////////////////////////////////////
//3rd Alphabetic pyramid.
// #include <stdio.h>
// int main(){
//     int rows,x,space,symbol;
//     char alpha = 'A';
//     for (x= 1 ; x <= 5 ; x++)
//     {
//         for(space= 1; space <= 5 - x ; space++)
//             printf("  ");
//         for(symbol= 1 ; symbol <= (x*2)-1 ; symbol++)
//             printf("%c ",alpha);
//             alpha++;
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
//         A 
//       B B B 
//     C C C C C 
//   D D D D D D D 
// E E E E E E E E E 
////////////////////////////////////////////////////////////////////////////////////////////////
//4th reverse pyramid.
#include <stdio.h>
int main(){
    int x,space,symbol;
    for (x= 5 ; x >= 1 ; x--)
    {
        for(space= 5 - x ; space >= 1 ; space--)
            printf("  ");
        for(symbol= (x*2)-1 ; symbol >= 1 ; symbol--)
            printf("* ");
        printf("\n");
    }
    return 0;
}
// Outupt:
// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * * 
//         *
////////////////////////////////////////////////////////////////////////////////////////////////
//5th 0 1 pyramid.
// #include <stdio.h>
// int main(){
//     int i,j,s;
//     for(i=1;i<=5;i++)
//     {
//         for(s=1;s<=5-i;s++)
//         printf("  ");
//         for(j=1;j<=i*2-1;j++)
//         {
//             if(j%2==0)
//             {
//                 printf("0 ");
//             }
//             else
//             {
//                 printf("1 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
//         1 
//       1 0 1
//     1 0 1 0 1
//   1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 
////////////////////////////////////////////////////////////////////////////////////////////////
// Misc Pyramids:
// 1st Indented pyramid->
// #include <stdio.h>
// int main(){
//     for(int i=1;i<=7;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("_ ");
//         }
//         for(int s=8-i;s>=1;s--)
//         {
//             printf(" *  ");
//         }
//         for(int x=1;x<=i;x++)
//         {
//             printf(" _");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
// _  *   *   *   *   *   *   *   _
// _ _  *   *   *   *   *   *   _ _
// _ _ _  *   *   *   *   *   _ _ _
// _ _ _ _  *   *   *   *   _ _ _ _
// _ _ _ _ _  *   *   *   _ _ _ _ _
// _ _ _ _ _ _  *   *   _ _ _ _ _ _
// _ _ _ _ _ _ _  *   _ _ _ _ _ _ _