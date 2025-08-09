#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<a+b<<endl;
}
int sum(float a,int b,int c){
    cout<<b/c<<endl;
}
int main(){
cout<<"here is function overloading"<<endl;
sum(2.5,3,6);
sum(2,3);


    return 0;
}