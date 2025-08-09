#include <iostream>
using namespace std;
class Math
{
    public:
    int x;
    int y;

public:
static void sum(Math,Math);
    void setval(int x_val, int y_val)
    {
        x = x_val;
        y = y_val;
    }
    void print_x_y(void)
    {
        cout << "the value of x is:" << x << "the valye of y is:" << y << endl;
    }
    
};
 void Math ::sum(Math a,Math b){
    int a_tot=a.x+a.y;
    int b_tot=b.x+b.y;
    cout<<"the total of object m1 is:"<<a_tot<<"the total of object m2 is "<<b_tot<<endl;}
 

int main()
{
    Math stud[10];
    stud[0].setval(45,67);
    stud[1].setval(45,67);
    stud[2].setval(45,67);
    stud[3].setval(45,67);
    stud[4].setval(45,67);
    stud[5].setval(45,67);
    stud[6].setval(45,67);
    stud[7].setval(45,67);
    stud[8].setval(45,67);
    stud[9].setval(465,6);
    stud[10].setval(46,47);
    Math m1,m2,m3;
    m1.setval(5,9);
    
    m2.setval(3,5);
    cout<<m2.x<<endl;
  Math::sum(stud[9],stud[10]);
// ???    
    
}