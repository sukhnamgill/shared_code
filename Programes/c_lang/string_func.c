#include<stdio.h>
#include<string.h>
int main(){
    //Point to be noted:strlen function return value in int so declare %d in printf function.
    char old_str[]="He is my best friend";
    // printf("%d",strlen(st));
    char new_str[]=",His name is Naitin";
    // FUNCTION TO CHECK IS VALUE SAME THEN IT RETURN 0 OTHER WIE ,IF FIRST WORLD COMES FIRST IN abc THEN IT NEGATIVE ELSE,POSTITVE
    int a=strcmp("aew","aew");
    printf(" the value is :%d",a);
     //function to concatenate the two strings
     char cat_str;
        
     printf(" \nThis is cancatenate string :%s",strcat(old_str,new_str));


    //functon for copy the one string to another string.
    
    strcpy(new_str,old_str);

    printf("\n%s iam old string",old_str);
    printf("\n%s iam new string",new_str);


    return 0;
}