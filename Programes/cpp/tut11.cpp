#include<iostream>
using namespace std;
int main(){
    //here is array how to fixed array
    //Fixed array
    int  fixed_array[]={1,2,3,4,5,6,7,8};
    cout<<fixed_array[1]<<endl;
    cout<<fixed_array[2]<<endl;

    int dyna_arr[]={1,2,3,4,5,6,7};
    cout<<"this is dynamic array-->"<<dyna_arr[3]<<endl;
    for (int i=0;i<7;i++){
        cout<<dyna_arr[i*dyna_arr[i]]<<endl;
    }


    return 0;
}