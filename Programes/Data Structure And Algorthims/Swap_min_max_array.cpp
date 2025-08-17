#include <iostream>
using namespace std;
void swap_min_max(int arr[],int length){
    int min=INT8_MAX;
    int min_index=0;
    for (int i = 0; i < length; i++)
    {
        if(arr[i]<min){
        min=arr[i];
        min_index=i;}
    }
    int max=INT8_MIN;
    int max_index=0;
    for (int  i = 0; i < length; i++)
    {
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    swap(arr[min_index],arr[max_index]);
    // cout<<"max is "<<max<<endl;
    // cout<<"minimum  is "<<min<<endl;
    // cout<<"max index is "<<max_index<<endl;
    // cout<<"min index is  "<<min_index<<endl;
    
    
}
int main()
{
    /* code */
    cout<<"hello sukhnam"<<endl;
    int arr[] ={1,2,0,9,4,5};
    int l =sizeof(arr)/sizeof(arr[0]);
    cout<<"before swaping"<<endl;
    for (int i :arr){
        cout<<i<<" ";
    }
    
    swap_min_max(arr,l);

     cout<<"\nafter swaping"<<endl;
    for (int i :arr){
        cout<<i<<" ";
    }
    return 0;
}
