#include<iostream>
using namespace std;
int fac(int n){
    // int an=a*(a-1);
    // cout<<an<<endl;

    if(n<=1){
        return 1;
        cout<<"helo";
    }

return n * fac(n-1);
        // cout<<a;



}
int fibo(int a){
        int old=0;
        int neww=1;
    for (int i=0;i<5;i++){
        
        int nnew=old+neww;
        old=neww;
        neww=nnew;
        cout<<old<<",";
    }

}
int fib_re(int n){
    
if(n<=1){
    return 0;
} static int neww=1;
    static int old=0;
    int nnew;
nnew=old+neww;
old=neww;
neww=nnew;
nnew=old+neww;

cout<<old<<"-";
fib_re(n-1);
}
int main(){
cout<<"this is factorial solver"<<endl;
//  int n=5;


// cout<<fac(5);
// fibo(5);
fib_re(10);


    return 0;
}