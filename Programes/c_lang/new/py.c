#include <stdio.h>
#include<string.h>
void find_sq(int x){
    printf("\n The answer is :\033[34m%d",x*x);
    printf("\033[0m");
    
}

void print(char sr[]){
    
    printf("\n%s",sr);
    // return 0;
}
void main(){
    printf("\033[32m");
printf("Welcome in sukhnam programe ..\n\tHere we will discuss about the method s of declaring functions \n\tin  the c language");
printf("\033[0m");
find_sq(45);
print("my name is sukhnam gill");
// char x[]="\niam string";
// printf("%s",x);


}