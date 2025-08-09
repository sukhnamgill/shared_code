#include <iostream>
using namespace std;
class Animal;
class Lion{
    public:
        int lion_value(Animal);
};
class Animal{
    // public:
    friend class Lion;
    int lions=10;
    int cat =5;

};
int Lion :: lion_value(Animal ob){
    cout<<"the value of cat is "<<ob.cat<<"the value of lion is "<<ob.lions<<endl;
}

//function and classes

int main(){
    cout<<"hello how are you";
    // return 0;
    Animal sher;
    Lion jumba;
    // int s=jumba.lion_value(sher);
    // cout<<s<<endl;
    
}