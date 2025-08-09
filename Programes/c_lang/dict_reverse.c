#include<stdio.h>
int print_array(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d>",a[i]);
    }
 return 0;
  }  


int main(){
    printf("iam running\n");
int arr[]={1,2,3,4,5,6,7};
// work with array 
// for checking array>>>
// printf("%d",arr[0]);
int n=7;
int temp;

for(int i =0;i<n/2;i++){
    // #code
    // this code run only for three times 
    // printf("%d",arr[i]);
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    // printf("%d",arr[i]);

    
}
print_array(arr,7);

 
    return 0;
}