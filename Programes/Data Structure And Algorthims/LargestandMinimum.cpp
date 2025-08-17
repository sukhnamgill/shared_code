#include <iostream>
using namespace std;
void Find_max(int arr[]){
    int max= INT8_MIN;
    
    for(int i=0;i<4;i++){
        if (arr[i]>max){
            max=arr[i];
        

        }
    }
    cout<<"the Max value is "<<max<<endl;
}
int main(){
    cout<<"hello world";
    int array [4]={5,6,47,34};
    Find_max(array);


    return 0;
}