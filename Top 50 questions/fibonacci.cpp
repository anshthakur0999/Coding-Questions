#include<iostream>
using namespace std;

int fib_seq(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib_seq(n-1) + fib_seq(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib_seq(n)<<endl;
    return 0;
}