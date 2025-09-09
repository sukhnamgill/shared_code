#include <iostream>
using namespace std;
//brute force approach
void bigWater(int arr[],int len){
    
    for(int i=0;i<len;i++){
        int area=0;
        
        for(int j=i;j<len;j++){
            area++;
            area=area+arr[i]+arr[j];

        }
        cout<<area<<endl;
    }
}

int main(){
    //programe to find the bigger cantainer
    cout<<"hello world";
    int water[]={1,4,2,4,2,6,7,8,5,4};
    int len=sizeof(water)/sizeof(water[0]);
    bigWater(water,len);




    return 0;
}