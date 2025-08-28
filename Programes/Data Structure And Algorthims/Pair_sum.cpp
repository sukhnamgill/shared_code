#include<iostream>
#include <vector>
using namespace std;
void pair_search(vector<int> &ar,int target){
    int index[]={0,0};
    bool flag=false;
    for(int i=0;i<ar.size();i++){
        if(flag){
            break;
        }
        for(int j=0;j<ar.size();j++){
            if((ar[i]+ar[j])==target){
                cout<<"value founds"<<endl;
                cout<< "index is{"<<i<<" , "<<j<<"}";
                flag=true;
                break;
            }
            
        }
        }
    }
    

int main()
{
    cout<<"Here we find the target value in pair sum"<<endl;
    vector<int> v1={1,2,3,4,19};
    int target=20;
    pair_search(v1,target);
    return 0;
}
