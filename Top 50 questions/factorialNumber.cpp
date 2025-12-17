#include<iostream>

using namespace std;

int factorialNumber(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorialNumber(n-1);
}


int main(){
    int number;
    cin>>number;
    cout<<factorialNumber(number);
    return 0;
}