#include<stdio.h>

char* slicer( char str[],int start_point ,int end_point){
    printf("\nhello dosto, function chal raha hai");
    // int i=0,count;
    char *p_1=&str[start_point];
    // char *p_2=&str[end_point];
    str=p_1;
    str[end_point]='\0';
    return str;


}
int main(){
    char string[]="hello sukhnam";
    printf("\n>>>%s",slicer(string,1,6));
    return 0;
    
}