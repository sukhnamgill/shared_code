#include<stdio.h>
int main(){
    printf("iam running bro\n");
    printf("here we discusiing about control statements");
    int age;
    printf("\nthe your age here:");
    scanf("%d",&age);
    printf("age is %d",age);
    if(age>=18 && age<120){
        printf("\nyou can vote bro");
    }
    else if (age<10)
    {
        if(age<3){
        printf("\nyour are so minor bro.. you should to learn speak first");}
        else{
            printf("\nYour are so minar bro");
        }
    }
    else if (age>120){
        printf("\nyour are so elder");
    }
    



}