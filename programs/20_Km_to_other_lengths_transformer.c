#include <stdio.h>
int main(){
    float km,m,cm,inch,ft;
    char for_user;
    printf("Conversion of km to any length.\n\n");
    printf("Type of conversion in m / cm / inch / foot-> ");
    scanf("%c",&for_user);
    printf("\nWrite the distance in km-> ");
    scanf("%f",&km);
    switch (for_user)
    {
    case 'm':
        m=km*1000;
        printf("%fkm/s is equal to %fm/s\n",km,m);
        break;
    case 'c':
        cm=km*100000;
        printf("%fkm/s is equal to %fcm/s\n",km,cm);
        break;
    case 'i':
        inch=km*39370.1;
        printf("%fkm/s is equal to %f inch/s\n",km,inch);
        break;
    case 'f':
        ft=km*3281;
        printf("%fkm/s is equal to %f foot/s\n",km,ft);
        break;
    default:
        break;
    }
    return 0;
}