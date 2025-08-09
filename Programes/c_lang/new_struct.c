#include <stdio.h>
struct Arry
{
    int code;


};
int main(){
struct Arry Facebook[100];
Facebook[0].code=45;
Facebook[1].code=96;
int j =10;
for(int i =1;i<=100;i++){
    
    Facebook[i].code=j;
    j=j+10;
    
}
printf("%d\n",Facebook[20].code);


    return 0;
}