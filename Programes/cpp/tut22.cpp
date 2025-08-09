#include<iostream>
using namespace std;
class Bds{
int a,b,c;
public:
    void set_val(int ax,int bx,int cx){
        a=ax;
        b=bx;
        c=cx;
        cout<<"Value sucessfully set to the A,B,C"<<endl;

    }
    friend Bds complexs(Bds tea);  
    void print_val(void){
        cout<<"the value of A is "<<a<<endl;
        cout<<"the value of B is "<<b<<endl;
        cout<<"the value of C is "<<c<<endl;
    }
};
Bds complexs(Bds tea){
    cout<<"hello iam complex anfd foreign function"<<tea.a<<endl;
}
int main(){
Bds tea;
tea.set_val(12,34,5);
tea.print_val();
complexs(tea);

    cout<<"hello world welcome  in friend functions"<<endl;
}