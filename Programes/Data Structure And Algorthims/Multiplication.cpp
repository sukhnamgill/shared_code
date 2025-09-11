#include <iostream>
using namespace std;
void  multiply(int arr[],int len){
    
for(int i=0;i<len;i++){
    int ans=1;
    
    for(int j=1;j<len;j++){
        if(j!=i){
            ans=ans*arr[j];

        }
        

    }cout<<"answer is "<<ans<<endl;
}



}
int main(){
    cout<<"this is the multiplication of array except itself"<<endl;
    int arr[]={1,2,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    multiply(arr,len);





    return 0;
}