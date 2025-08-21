#include <iostream>
#include <vector>
using namespace std;
void subarray(vector<int> &vec){
    int max=INT8_MIN;
    int arr[]={0,0};
    for (int i = 0; i < vec.size(); i++)
    {cout<<endl;
        for(int j=i;j<=vec.size();j++){
            // cout<<endl;
            int sum=0;
            for(int k=i;k<j;k++){
                // cout<<vec[k]<<",";
                sum=sum+vec[k];
                
                
            }
            // cout<<"sum is "<<sum<<"index is "<<i<<j;
            if(sum>max){
                max=sum;
                arr[0]=i;
                arr[1]=j;
                

            }
        }
    }
    cout<<"index is {"<<arr[0]<<","<<arr[1]<<"}"<<endl;
}
int main()
{
    vector<int> vec={1,2,-3,-4};
    subarray(vec);
   
    return 0;
}
