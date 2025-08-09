#include <stdio.h>
struct Add{
int i;
int j;
};

struct Add sum(struct Add v1 ,struct Add v2){
    struct Add v3={v1.i+v2.i};
    printf("%d",v3);


}
int main(){
    struct Add eq1={4,2};
    struct Add eq2={3,4};
    struct Add eq3= sum(eq1,eq2);
 



return 0;
}