#include <stdio.h>
struct Data{
char Name[20];
int Class;
int Age;
int Reg_Key;
float Weight;
};
void Sorter(struct Data Student) 
{
printf("The Name of students is :%s\n Class%d\n His age is %d \n Reg No is :%d \n Weight:%f",Student.Name,Student.Class,Student.Age,Student.Reg_Key,Student.Weight);
}
    // {
    // printf("Name of Students is:%s\n Class of student is :%d\n Age of Student is :%d\n The Registration Key of Student is %d \n Student's Weight:%f\n",Object_Name.Name,Object_Name.Class,Object_Name.Age,Object_Name.Reg_Key,Object_Name.Weight);
    // }
    


int main(){
    struct Data Student={"Sukhnam",12,19,72413595,70.500};
    // printf(" The address of the Age Of Student in the ram is :%u",&Student.Age);
    //function for sortiung values of structer
    // Sorter(object_name);
    // Sorter(Student);
    Sorter(Student);




    return 0;
}