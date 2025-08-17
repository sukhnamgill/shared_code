#include <iostream>
using namespace std;
//make another array for reverse
void  Reverse_array(int arr[],int length){
    int reverse_array[length]={};
    for(int i=0;i<length;i++){
        reverse_array[i]=arr[length-i-1];
        
    }
    for(int i:reverse_array){
        cout<<i<<" ";
    }
}
void Reverse_org(int arr[],int length){
    for(int i=0;i<length/2;i++){
        swap(arr[i],arr[length-i-1]);
    }
    
}
// make reverse to that array which is original
int main()
{
    cout<<"welcome"<<endl;
    

    int sidha_array[]={2,3,5};
    // cout<<"correct array is "<<sidha_array<<endl;
    int len=sizeof(sidha_array)/sizeof(sidha_array[0]);
    // Reverse_array(sidha_array,len); 
    Reverse_org(sidha_array,len);
    for(int item:sidha_array){
        cout<<item;
    }
    return 0;
}
