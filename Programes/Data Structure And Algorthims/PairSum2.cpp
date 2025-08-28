#include <iostream>
#include <vector>
using namespace std;
//functions
// [1,2,3,4,7,9]  target is 
void PairSum(vector<int> &ar,int target){
    int i=0;
    bool flag=false;
    int j=ar.size();
    while(i<ar.size()){
        while(j>=0){
            if(target>(ar[i]+ar[j])){
                
                // cout<<"target is grater than sum of index "<<i<<j<<endl;
                i++;
            }
            if(target<(ar[i]+ar[j])){
                // cout<<"target is smaller than sum of index "<<i<<j<<endl;
                j--;
            }
            if(target==ar[i]+ar[j]){
                cout<<"target founds index is{"<<i<<" , "<<j<<"}"<<endl;
                flag=true;
                break;
            }
            

        }if(flag){
            break;
        }
        else{
            cout<<"value did not found it is impossible"<<endl;
        }

    }
}

int main(){
cout<<"Pair sum using optimal Algorithm"<<endl;
    // vector<int> arr={1,2,3};
    // cout<<arr.size();
    vector<int> arr(3);  // fixed size of 5, initialized with 0s

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 7;
    arr[3] = 10;
    PairSum(arr,3);
    return 0;
}
