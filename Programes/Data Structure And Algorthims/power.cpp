#include <iostream>
using namespace std;
int powerfunc(int val,int n){
    int power=1;
    for(int i=1;i<=n;i++){
        power=val*power;

    }
    return power;
}
int optimized(int value,int power[],int len){
    int incPower=1;
    // int mainPower=1;
    for(int i=len-1;i>=0;i--){
        // cout<<incPower<<endl;
        cout<<"value is "<<value<<endl;
        if(power[i] !=0){
            // value=powerfunc(value,incPower);
            for(int s=1;s<len;s++){
                
            value=value*incPower;
        }
        }
        incPower=incPower*2;
    }
    return value;
}
int main(){
    int arr[]={0,1,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int value=3;
    int j=optimized(2,arr,len);
    cout<<"power is"<<j<<endl;


    return 0;
}