#include<iostream>
using namespace std;
//destructor for free the memory of the objects of the classes
class Animal{
    public:
    Animal(){
        cout<<"iam constructer"<<endl;
    }
    ~Animal(){
        cout<<"iam desstructure"<<endl;
    }
};

int main(){
cout<<"hello world"<<endl;
Animal lion();


    
    return 0;
}