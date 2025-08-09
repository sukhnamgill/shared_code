#include<stdio.h>
#include<string.h>

struct students
{
    int age;
    char name[20];
    float salary;
};



int main(){
    
struct students s1,s2;
printf("Enter the name of Student 1:\n ");
scanf(" %s",&s1.name);

printf("enter the age of Student 1\n");
scanf("%d",&s1.age);
printf("Enter salary of Students 1\n");
scanf("%f",&s1.salary);
printf("The name of students is :%s\n  His age is %d\n and his salary is %f\n",s1.name,s1.age,s1.salary);
return 0;
}