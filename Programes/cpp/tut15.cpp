#include<iostream>
using namespace std;
//user-defined functions
int simple_swap(int a, int b){
int temp=a;
a=b;
b=temp;
return 0;
}
int ref_swap(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
return 0;
}
int main(){
// cout<<"Welcome in sukhnam's programming"<<endl;
    int x=10;
    int y=20;
    cout<<"the value of X is "<<x <<"and the value of y is "<<y<<endl;
    simple_swap(x,y);
    cout<<"the value of X is "<<x <<"and the value of y is "<<y<<endl;
    ref_swap(&x,&y);
    cout<<"the value of X is "<<x <<"and the value of y is "<<y<<endl;




    return 0;
}