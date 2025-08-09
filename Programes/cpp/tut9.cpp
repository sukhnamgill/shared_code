// there are loppps in c++
#include<iostream>
using namespace std;
int main(){
cout<<"this programe for for loop"<<endl;
// int a=0;
// while(a<=9){
//     cout<<"this is while loop"<<a<<endl;
//     a++;
// }
// do{
//     cout<<"Iam on runnign mode else condition is false"<<a<<endl;
// }while(a>10);

// int j=2;
// switch(j){
// case 10:
// cout<<"case ist is match"<<endl;
// break;

// case 2:{
// cout<<"case 2 is matched"<<endl;
// break;}

// default:
// cout<<"case third is matched"<<endl;

// }


// for loop
for (int i =0;i<10;i++){
    cout<<i<<endl;
    if(i==5){
        // cout<<"the value is here 5"<<endl;
        continue;
    }
    cout<<"sukhnam best"<<i<<endl;
}
//break and continue n c++
// break for stoping the programe and exit the loop and continue statement for skip the iteration which code is written after the continuie statement



return 0;
}