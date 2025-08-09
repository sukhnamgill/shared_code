#include<iostream>
using namespace std;
// default value function
float loan_intr(int amount,float intr=9.0){
    return (amount*9.0)/100+amount;

}
inline int sum(int x, int y){

    return x+y;
}
int product(int j){
static int x=10;
x=x+10;
cout<<"the answer is "<<x*j<<endl;
}
int main(){
    int amt=100000;
cout<<"here is inline functions"<<endl;
int ans =sum(23,330);
cout<<ans<<endl;
product(5);
product(5);
product(5);
cout<<"if you spend RS:"<<amt<< "you will return the value RS:" <<loan_intr(amt)<<endl;
    return 0;
}