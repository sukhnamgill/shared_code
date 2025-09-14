#include <iostream>
using namespace std;
//optimized approah
void optimized(int arr[],int len){
    //prefix
    int prefix[len];
    int suffix[len];
    int pi=1;
    for(int i =0;i<len;i++){
        prefix[i]=pi;
        pi=pi*arr[i];

    }
    int ba=1;
    for(int j=len-1;j>=0;j--){
        suffix[j]=ba;
        ba=ba*arr[j];
    }
    //printing preffix
    // cout<<"printing preffix"<<endl;
    // for(int i: prefix){
    //     cout<<i<<",";
    // }
    // cout<<"printing suffix"<<endl;
    // for(int i: suffix){
    //     cout<<i<<",";
    // }
    cout<<"final output is "<<endl;

    for (int sn=0;sn<len;sn++)
    {//just modify by me to solve comma problems 
        if(sn<len-1){
        cout<<"("<<prefix[sn]*suffix[sn]<<"),";}
        else{
            cout<<"("<<prefix[sn]*suffix[sn]<<")";
        }
    }


}
//brute force approah
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
    int arr[]={1,3,5,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    // multiply(arr,len);
    optimized(arr,len);





    return 0;
}