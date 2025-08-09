#include<iostream>
using namespace std;
class Animal{
    private:
    int a;
    int b;
    int c;
    int set_p_data(int a1, int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
        return 0;
        // cout<<"the value of a is" <<a<<"the value of b is "<<b<<"the value of  c is "<<c<< endl;
    }
    
    public:
    int d;
    int e;
    int sum(int a, int b);
    int setdata(int d1,int e1){
        d=d1;
        e=e1;
        return 0;
    }
};
int Animal::sum(int a,int b){
    cout<<a+b<<endl;
}
int main(){
    Animal dog;
    dog.setdata(5,7);
    cout<<"the value of d is " <<dog.d<<endl;
    cout<<"the value of e is " <<dog.e<<endl;
    // dog.set_p_data(12,34,56);
    // cout<<dog.a<<endl;


cout<<" Welcome in Object Orientations in C++"<<endl;
dog.sum(34,89);



    return 0;
}
