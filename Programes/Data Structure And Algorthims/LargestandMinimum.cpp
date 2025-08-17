#include <iostream>
using namespace std;
void Find_max(int arr[],int length){
    int max= INT8_MIN;
    
    for(int i=0;i<length;i++){
        if (arr[i]>max){
            max=arr[i];
        

        }
    }
    cout<<"the Max value is "<<max<<endl;
}
//find minimum value
void Find_min(int arr[],int length){
    int min= INT8_MAX;
    
    // int len=(sizeof(arr)/sizeof(arr[0]));
    
        for(int i=0;i<length;i++){
        if (arr[i]<min){
            min=arr[i];
        

        }
    }
    
    cout<<"the Min value is "<<min<<endl;
}
int main(){
    cout<<"hello world";
    int array [5]={5,6,47,-2,34};
    int length=sizeof(array)/sizeof(array[0]);
    Find_max(array,length);
    Find_min(array,length);
    
    


    return 0;
}