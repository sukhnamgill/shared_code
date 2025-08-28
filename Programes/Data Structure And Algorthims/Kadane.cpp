#include<iostream>
#include <vector>
using namespace std;
void kandane(vector<int> &ar){
    int len=ar.size();
    int curr_sum=0;
    for(int i=0;i<len;i++){
        curr_sum=curr_sum+ar[i];
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<"max sum of subarray is "<<curr_sum;
}
int main()
{
    vector<int> v1={1,-2,3,-4,6};
    kandane(v1);

    return 0;
}
