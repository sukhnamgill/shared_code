#include <iostream>
#include <climits>
using namespace std;
//brute force approach
void bigWater(int arr[],int len){
    int maxarea=0;
    int narr[]={0,0};
    
    for(int i=0;i<len;i++){
        
        
        for(int j=i+1;j<len;j++){
            int area=0;
            int diff=j-i;
            int mini=min(arr[i],arr[j]);
            area=mini+diff;
            if(area>maxarea){
                narr[0]=i;
                narr[1]=j;

            }
            maxarea=max(maxarea,area);
            
            // cout<<area<<"-> index is "<<i<<","<<j<<endl;

        }
        
    }
    cout<<"max area is "<<maxarea<<"and its index is "<<narr[0]<<","<<narr[1]<<endl;
}
//optimizaton water filling problem
void optimized(int arr[],int len){
    
    int i=0;
    int j=len;
    int maxi=0;
    int narr[]={0,0};
    while(i<len && j>=0){
        
        int area=0;
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }
        int mini=min(arr[i],arr[j]);
        area=mini+(j-i);
        // cout<<"area is "<<area<<"index is "<<i<<j<<endl;
        if(area>maxi){
            narr[0]=i;
            narr[1]=j;

        }
        maxi=max(maxi,area);


    }
    cout<<"max area is "<<maxi<<"index is "<<narr[0]<<","<<narr[1]<<endl;
    
}
int main(){
    //programe to find the bigger cantainer
    // cout<<"hello world";
    int water[]={6,7,2,2,8,4,9};
    int len=sizeof(water)/sizeof(water[0]);
    // bigWater(water,len);
    optimized(water,len);




    return 0;
}