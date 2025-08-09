#include <iostream>
using namespace std;
class Simple{
    public:
    int d1,d2,d3;
    Simple(int a,int  b=7,int c=90){
        cout<<"the value of A is:("<<a<<") \nvalue of b is:("<<b<<") \nthe value of C is:("<<c<<")"<<endl;
    }
};

int main(){
    cout<<"constructure with default arguments"<<endl;
    int a ,b,c;
    cout<<"Enter value for A"<<endl;
    cin>>a;
    cout<<"Enter value for B"<<endl;
    cin>>b;
    cout<<"Enter value for C"<<endl;
    cin>>c;



    Simple ob=Simple(a,b,c);



    return 0;
}