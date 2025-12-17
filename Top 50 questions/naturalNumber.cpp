#include<iostream>
using namespace std;

int sumNaturalNumbers(int number){
    if(number==1) return 1;
    return number+sumNaturalNumbers(number-1);
}


int main(){
    int n;
    cin>>n;
    cout<<sumNaturalNumbers(n);
    return 0;
}