#include<iostream>
#include<vector>
using namespace std;
//func..

void op_majority(vector<int> &arr){
    int freq=0;
    int answer=0;
    for(size_t i=0;i<arr.size();i++){
        if(freq==0){
            answer=arr[i];
            freq++;
        }
        if(answer==arr[i]){
            freq++;
        }
        if(freq>=arr.size()/2){
            cout<<"end with ans"<<answer<<"with frequwny"<<freq<<endl;
            break;
        }
        else{
            freq--;
        }

    }
    // cout<<"answr is"<<answer <<"and frequency is "<<freq<<endl;
}
void Majority(vector<int> &ar){
    for(size_t i=0;i<ar.size();i++){
        int count=1;
        for(size_t j=i+1;j<ar.size();j++){
            // cout<<i<<j<<endl;
            if(ar[i]==ar[j]){count++;
            
            // cout<<"value is matched"<<ar[i]<<ar[j]<<endl;
            }}
        if(count==ar.size()/2){
        cout<<"majority element is found in array "<<ar[i]<<endl;
        break;
        }
        else {cout<<"not found majority element"<<endl;}
    }

}
int main(){
//majority element
vector<int> arr(6);
arr[0]=1;
arr[1]=2;
arr[2]=2;
arr[3]=2;
arr[4]=1;
arr[5]=3;
// vector<int> arr={1,3,3,4};
// Majority(arr);
op_majority(arr);


   
    return 0;
}
