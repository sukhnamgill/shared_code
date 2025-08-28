#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vc){
    for (int i = 0; i < vc.size()/2; i++)
    {
     swap(vc[i],vc[vc.size()-i-1]);
    }
    
}
int main(){
    cout<<"iam sukhnam";
    vector<int> vec={1,2,3};
    cout<<vec[1];
    vec.push_back(10);
    cout<<endl<<vec.at(3)<<endl;
    cout<<vec.size();
    cout<<"printing array"<<endl;
    reverse(vec);
    //printing values of array
    for(auto i:vec){
        cout<<i<<endl;
    }
    
    //printing size of vector





    return 0;
}