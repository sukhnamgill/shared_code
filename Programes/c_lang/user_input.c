#include <stdio.h>
#include <string.h>
int main(){
char name[200];
int age;
char sex[200];
printf("\nenter your name");
scanf("%s",&name);

printf("\nEnter your age");
scanf("%d",&age);

printf("\nenter your sex");
scanf("%s",&sex);
printf("Your name is %s \n Your age is %d \n  your sex is %s",name,age,sex);



    return 0;
}