#include <iostream>
using namespace std;
class Shop{
float price[50];
int item_id[50];
int counter=0;
public:
int init_(int);
void set_item(int);
void set_price(int);
void display(void);
void check(void);
};
void Shop:: check(void){
int time;
cout<<"Welcome in the Sukhnam Industries ,How many item do you want to insert ,Please enter in Numeric form"<<endl;
cin>>time;
if(time>1){
    for(int i =0;i<time;i++){
        init_(i);
        counter++;
    }
    display();
}else{
    cout<<"Try agian"<<endl;
}
}
int Shop::init_(int i){
    // int i= counter;
    set_item(counter);
    set_price(counter);
    // display();
}
void Shop::set_item(int i){
// counter=0;
cout<<"Enter The Item to Insert: "<<i<<endl;
cin>>item_id[i];
}
void Shop ::set_price(int i){
    cout<<"Enter the price to Item: "<<i<<endl;
    cin>>price[i];
}
void Shop :: display(void){
    for (int i =0;i<=counter;i++){
        // cout<<"the value of counter is "<<counter<<endl;
        cout<<"------>the item no:"<<item_id[i]<<endl<<"-----> price is  "<<price[i]<<endl;
    }
}
int main(){

Shop sukhnam;
sukhnam.check();
// sukhnam.display();


    return 0;
} 