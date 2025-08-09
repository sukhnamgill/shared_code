#include <stdio.h>
#include <string.h>
// #include <conio.h>
struct emp
{
    char name[20];
    int age;
    float salary;
};  

int main (){
  
    struct emp  e1,e2;
    strcpy(e1.name,"sukhnam");
    // e1.name="sukhnam";
    e1.salary=20000.500;
    e1.age=19;
    printf(" the name of employee is%s \n the salalry %f \n and the age of employe%d",e1.name,e1.salary,e1.age);
    

    



    return 0;
}