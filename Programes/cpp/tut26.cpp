#include<iostream>
using namespace std;
class Simple{
    int a,b;
    public:
     void printer(void){
        cout<<"value of A is"<<a<<"the value of B is"<<b<<endl;
    }
    // Simple(void){
    //     a=20;
    //     b=30;
    //     cout<<"iam running"<<endl;    }
    Simple( void);

};
Simple::Simple( ){
    static int count =0;
    cout<<"iam constructer two bro..."<<count<<"times runned"<<endl;
    b=10+count;
    a=20+b;
    printer();
    count++;
}
//classes and objects 
int main(){
cout<<"hello wrold"<<endl;;
Simple ob1,o3 ,o5;

// ob1.printer();

    return 0;
}