#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int> &a){
    int n = a.size();
    int sum = n*(n+1)/2;
    int suma = 0;
    for(int i=0;i<n-1;i++){
        suma+=a[i];
    }
    return sum-suma;
}

int main(){

    vector<int> a = {1,2,3,4,5,7,8,9};
    cout<<missingNumber(a);

    return 0;
}