#include<stdio.h>
int main(){
    int i =1;
while(i<2){
    printf("%d Iam While Loop \n",i);
    i++;
}
// this is do while loop
int var_=1;
do{
    
    printf("\niam do while ,even condition is wrong but iam on run mode for atleast once a time%d",var_);
    var_++;
}while(var_<0);
// this is for loop ,it take three arguments(first:declaretion of variable,second:conditon and third one: for itteration or action)
for(int num=4;num<10;num++){
    printf("\nhello iam for loop in c_language");
}


    return 0;

}