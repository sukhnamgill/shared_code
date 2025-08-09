#include<iostream>
using namespace std;
class Vote{


 int l_age;
 void sex();
void porn();
public:
void vote();

};
void Vote:: sex(){
    cout<<"You can do-s** and watch porn"<<endl;
}
void Vote :: porn(){
cout<<"you can not do sex and you can't watch porn"<<endl;

}
void Vote:: vote(){
    cout<<"enter your age to check the egligibility top check vote right"<<endl;
    cin>>l_age;
    if (l_age>=18)
    {
        /* code */
        cout<<"you can vote in india"<<endl;
        sex();
    }
    else{
        cout<<"you cannot vote in india"<<endl;
        porn();
    } 
}

int main(){
    Vote sukhnam;
    sukhnam.vote();
    // sukhnam.sex();
    // sukhnam.porn();

cout<<"The programe is Sucessfully Run"<<endl;





}







