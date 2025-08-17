#include<iostream>
using namespace std;
int product(int arr[],int length){
    int t_product=1;
    for(int i=0;i<length;i++){
        t_product=t_product*arr[i];
    }
    return t_product;

}
int sum(int arr[],int length){
    int t_sum=0;
    for(int i=0;i<length;i++){
        t_sum=t_sum+arr[i];
    }
    return t_sum;
}
int main()
{
    cout<<"product and sum of array";
    int arr[]={1,2,3,4,5};
    int l=sizeof(arr)/sizeof(arr[0]);
    int t_product=product(arr,l);
    int t_sum=sum(arr,l);
    cout<<"the product of array is "<<t_product<<"\n the sum of array is "<<t_sum;
    return 0;
}
