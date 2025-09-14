//here is poineter in cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    int a=100;
    cout<<"adress of variable a is "<<&a<<endl;
    //to storing the address of variable or address of value , to store that address in variable there is piointer

    int *address=&a;
    cout<<address<<endl;
    //to get value from address,we use dereferencing
    int valueinadd=*address;
    cout<<valueinadd<<endl;

    //double pointer
        // i *have address of variable A
        //now i want to get address of address

        //note: now we will use double star to store the address of adress  

    int **addofadrs= &address;
    cout<<"adress of adresss is "<<addofadrs<<endl;
    cout<<"dereferencing the pointer is "<<**addofadrs<<endl;
    //using single star to dereferncing get the address of variable A ,and double star referencing get the value of varibale A.

    //pointer in the array
     int arr[]={1,2,3,4,5};
     cout<<"geting the address of array->"<<&arr+1<<endl;//getting address of array element
     cout<<"geting the address of array-> subtract is "<<(&arr+3)-(&arr+2)<<endl;//getting address of array element
     cout<<"geting the address of array->"<<&arr+3<<endl;//getting address of array element
     cout<<*arr+1<<endl;//getting the value of array element

     //printing the value through the loop
     int i=0;
     while(i<5){
        cout<<*arr+i<<",";
        cout<<sizeof(arr[i])<<endl;
        i++;
     }     



}