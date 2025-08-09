//structure and union
#include <iostream>
using namespace std;
typedef struct friends{
int age;
float weight;
char code;

}fr;
union cash{
int amount;
char car;


};
int main(){
cout<<"thisprograme for struct and uniion"<<endl;
union cash today;
today.amount=200;
cout<<today.amount<<endl;




struct friends Sukhnam;
Sukhnam.age=20;
Sukhnam.weight=69.9;
Sukhnam.code='g';

fr mayank;
mayank.code='j';
mayank.weight=99;
mayank.age=19;

struct friends gurkirat;
gurkirat.age=20;
gurkirat.code='p';
gurkirat.weight=65;

struct friends arshpreet;
arshpreet.age=20;
arshpreet.code='h';
arshpreet.weight=70;

enum data{hello , iam ,best ,programmer};
data e1=hello;
cout<<e1;


// cout<<arshpreet.age<<endl<<Sukhnam.weight<<endl<<Sukhnam.code<<endl<<mayank.weight<<endl;

    return 0;
}