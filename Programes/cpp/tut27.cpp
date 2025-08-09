#include <iostream>
using namespace std;
class bca{
    int a,b;
    string c;
    public:
    bca(int x,int y,string n){
        a=x;
        b=y;
        c=n;
        cout<<"iam runned"<<endl;
        print();
    }
    void print(void){
        cout<<"value of a is "<<a<<"the value of B is "<<b<<"the name is "<<c<<endl;
    }
};


int main(){
cout<<"hello world"<<endl;
//implicit call
bca h(56,78,"sukhnam");
//explicit call
bca c =bca(90,76,"mohan_das _karamchand");




    return 0;
}