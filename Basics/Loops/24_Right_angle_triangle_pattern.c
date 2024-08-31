// 1st Star pattern
// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=5;i>=1;i--)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

//2nd Alphabatical pattern ASCII value->
// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=65;i<=69;i++)
//     {
//         for(j=65;j<=i;j++)
//         {
//         printf("%c ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
// A 
// A B
// A B C
// A B C D
// A B C D E

//3rd Alphabatical pattern manual value->
// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i='A';i<='E';i++)
//     {
//         for(j='A';j<=i;j++)
//         {
//         printf("%c ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
// A 
// A B
// A B C
// A B C D
// A B C D E

//4th 0 1 pattern->
// #include <stdio.h>
// int main(){
//     for(int x=1;x<=5;x++)
//     {
//         for(int i=1;i<=x;i++)
//         {
//             if(i%2==0)
//             {
//                 printf("0 ");
//             }
//             else{
//                 printf("1 ");
//             }
//         }
//     printf("\n");
//     }
//     return 0;
// }
// Outupt:
// 1 
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

//5th floyd's triangle->
// #include <stdio.h>
// int main(){
//     int x,i,num=0;
//     for(x=1;x<=4;x++)
//     {
//         for(i=1;i<=x;i++)
//         {
//             num++;
//             printf("%d ",num);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Outupt:
// 1 
// 2 3
// 4 5 6
// 7 8 9 10