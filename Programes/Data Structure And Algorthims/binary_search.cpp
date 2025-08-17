#include <iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int arra[5]={1,2,3,4,5};
    int target=4;
    for(int i=0;i<5;i++){
        
        if(arra[i]==target){
            cout<<"value found"<<endl;
            break;
        }
        else{
            if(i==4){
                cout<<"value is not found"<<endl;

            }
        }
        // cout<<"value not found"<<endl;
    }
    
    return 0;
    
}