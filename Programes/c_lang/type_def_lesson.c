#include <stdio.h>
#include <string.h>
typedef struct Friends
{
    char name[20];
    int age;
    char city[20];
} friend;
void display(friend object_name)
{
    printf("\n-------------\nThe name is :%s\n The age is :%d\n The city name is:%s", object_name.name, object_name.age, object_name.city);
}

int main()
{

    friend sukhnam = {"Harjeet", 19, "Nathowal"};
    // printf(" Friend name is:%s\n His age is : %d\n His city is : %s",sukhnam.name ,sukhnam.age,sukhnam.city);
    display(sukhnam);
    friend Gurkirat = {"Arshpreet", 19, "Chakar"};
    display(Gurkirat);
    friend harry = {"Gurkiart", 19, "dehrka"};
    display(harry);

    return 0;
}