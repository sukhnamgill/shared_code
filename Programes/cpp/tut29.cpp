#include<iostream>
using namespace std;
class Simple{
    int a;
    public:
    // Simple(Simple &ob){
    //      a= ob.a*2 ;
    //     cout<<"iam duplicate constructor"<<endl;
    // }
    void display(){
        cout<<"<The value of a is "<<a<<endl;
    }
    Simple(int c){
      a=c;
        cout<<"iam running when object is called"<<endl;
    }
    
};
int main(){
    Simple ob1 (25);
    ob1.display();
    Simple ob2 (ob1);
    ob2.display();



    cout<<"hello dosto kaise ho"<<endl;
    return 0;
}