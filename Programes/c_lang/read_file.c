#include <stdio.h>
int main (){
    
    
for(int i=0;i<=10;i++){
int n=18;
// printf("\nWelcome in sukhnam programes\n The table of %d",n);
FILE *pointer;
    pointer= fopen("hello2.txt","a");
    fprintf(pointer,"\n %dX%d=%d",n,i,n*i);
    // printf("the value in file is %d",num);
    fclose(pointer);
}


    return 0;
}