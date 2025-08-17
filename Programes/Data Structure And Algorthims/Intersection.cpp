#include <iostream>
using namespace std;
void intersection(int arr[],int arr2[],int length){
for(int i=0;i<length;i++){
    for(int j=0;j<length;j++){
        // cout<<i<<"  "<<j<<endl;
        if(arr[i]==arr2[j]){
            cout<<arr[i]<<" ";
        }
    }
}
}
int main()
{
   cout<<"Intersection is "<<endl;
   int arr1[]={2,3,8,5};
   int arr2[]={2,1,4,5};
   int l =sizeof(arr1)/sizeof(arr2[0]);
   intersection(arr1,arr2,l);

    return 0;
}
