#include <stdio.h>
#include <stdlib.h>
int main(){
int *pointer;
pointer =(int *)malloc(2*sizeof(int));
*pointer=100;
printf("%u,%d",pointer,*pointer);


free(pointer);
    return 0;
}