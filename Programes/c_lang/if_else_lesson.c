#include <stdio.h>
int main()
{
    printf("This lesson for IF ELSE IF ELSE control statements\n");
    int an, b;
    // taking input from user
    printf("Enter an integer for An\n");
    scanf("%d", &an);
    printf("Enter an Integer for B");
    scanf("%d", &b);
// if else statements
    if (an > b)
    {
        printf("\n An is greater than B");
    }
   else if(an==b){
    printf("\n both values are same");
   }
    else
    {
        printf("\n B is grater than A");
    }

    return 0;
}