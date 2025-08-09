#include <iostream>
using namespace std;
// classses
class A;
class B
{
public:
    int printers(A);
};

class A
{
    friend int B ::printers(A ob);
    int a;
    int b;

public:
    void setval(int a_, int b_)
    {
        a = a_;
        b = b_;
        cout << "value is sucessfully assigned" << endl;
    }
    
};
int B::printers(A ob)
{

    cout << ob.a << endl;
    return 0;
}

int main()
{
    cout << "hello world" << endl;
    A sukhnam;
    sukhnam.setval(45, 67);
     B japman;
        japman.printers(sukhnam);

    return 0;
}