#include<iostream>
using namespace std;

int perfect_num(int n){
    int total = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            total+=i;
        }
    }
    return total;
}

int main(){
    int n;
    cin>>n;
    perfect_num(n) == n ? cout<<"Yes it's a perfect number" : cout<<"No it's not a perfect no"<<endl;
    return 0;
}