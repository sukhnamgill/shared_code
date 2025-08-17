#include <iostream>
using namespace std;
int Unique_Finder(int arr[],int length){
    
    for(int i=0;i<length;i++){
        int match_count=0;
       for (int j=0; j < length; j++){
        // cout<<"i is "<<i<<"j is "<<j<<endl;
        if(j!=i){
       if(arr[i]==arr[j]){
            match_count=match_count+1;
        }}}
       if(match_count==0){
        cout<<"this is "<<arr[i]<<endl;
       }
    }
}
int main()
{
    int array[]={1,1,2,3,2,1,4,5,6,8,8,7,4};
    int length =sizeof(array)/sizeof(array[0]);
    Unique_Finder(array,length);
    return 0;
}
