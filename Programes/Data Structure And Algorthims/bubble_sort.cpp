#include <iostream>
using namespace std;
void bubblesort(int arr[],int len){
// [7,8,6,4,2]
for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);

        }
        
    }
}

}
int main(){
// cout<<"hello world"<<endl;
int arr[]={5,4,3,2,1};
int len=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,len);
for(int item: arr)cout<<item<<endl;
// cout<<arr[1];


    return 0;
}