#include <stdio.h>
int main(){
    printf("This lesson for switch- control statements \n");
    int i=20;
    switch (i)
    {
    case 22:
        printf(">>case one is match");
        break;
    case 23:
        printf(">>case two is matched");
        break;
    default:
        printf(">>no any case matched");
        break;
    }




    return 0;

}