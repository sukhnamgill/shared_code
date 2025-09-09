#include <iostream>
using namespace std;
int sellBuy(int data[],int len){
    //find lowest
    int min = INT16_MAX;
    int minIndex=0;
    int max=INT16_MIN;
    int maxIndex=0;
    //find min
    for(int i=0;i<len;i++){
        if(data[i]<min){
            min=data[i];
            minIndex=i;
        }
    }
    //find max
    if(minIndex<len-1){
    for (int j=minIndex+1;j<len;j++){
        if(data[j]>max){
            max=data[j];
            maxIndex=j;
        }
       
    }}
    else {cout<<"zero profit"<<endl;
    return 0;
    }
    int profit=data[maxIndex]-data[minIndex];
     cout<<"buy at day "<<minIndex+1<<" and sell on "<<maxIndex+1<<"and profit willbe "<<profit<<endl;

    //condition
    // if(profit>0){
    // cout<<"buy at day "<<minIndex+1<<" and sell on "<<maxIndex+1<<"and profit willbe "<<profit<<endl;}
    // else{
    //     cout<<"there will be loose, because of decreasing value"<<endl;
    // }
    


}
int main(){//1,2,3,4,5,6,7,8,9  for reference of data to count days!
int data[]= {8,7,6,2,0,8};
int len=sizeof(data)/sizeof(data[0]);
sellBuy(data,len);
// cout<<"status is"<<n<<endl;


    return 0;
}
