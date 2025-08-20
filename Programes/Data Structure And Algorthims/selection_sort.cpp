#include<iostream>
using namespace std;
void selectionSort(int arr[],int len){
    // int min=INT8_MAX;
    int minIndx=0;
    //in this first we find minimum value and place on the first index,then our second index will be our  first index.so on
    for(int i=0;i<len;i++){
        int min=INT8_MAX;
        // cout<<"outer "<<i;
        for(int j=i;j<=len;j++){
            if(arr[j]<min){
                
                min=arr[j];
                minIndx=j;
            }
            // cout<<"minimum is" <<min<<endl;
            // cout<<j<<", ";
            
            
            

        }
        // cout<<"min is "<<min<<endl;
        swap(arr[i],arr[minIndx]);

        
    }

}
int main()
{
cout<<"programmer sukhnam is zindabad \n here we will learn about selection code"<<endl;

int arr[]={5,4,3,2,2,3,4,4,5,1};
int len=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,len);
for(auto item:arr)cout<<item<<endl;
    return 0;
}
