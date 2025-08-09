#include<iostream>
using namespace std;
// classes and object
class Y;
class X{
    
  int a;
  int b; 
  friend void sum(X,Y);
  public:
  void setValue(int a_,int b_){
    a=a_;
    b=b_;
  } 
};
class Y{
friend void sum(X,Y);
int c;
int d;
public:
void setValue1(int a_, int b_){
    c=a_;
    d=b_;
}
};

void sum( X o1, Y o2){
    cout<<"the sum of x value and y  value is "<<o1.a+o1.b+o2.c+o2.d<<endl;
}
int main(){
cout<<"hello world"<<endl;
X val;
Y val2;
val.setValue(5,6);
val2.setValue1(6,7);
sum(val,val2);




return 0;
}