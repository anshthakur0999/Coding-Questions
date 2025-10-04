#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int largest(const vector<int> &a){
    int largest = INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    return largest;
}

int smallest(const vector<int> &a){
    int smallest = INT_MAX;
    for(int i=0;i<a.size();i++){
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    return smallest;
}

int main(){
    vector<int> a = {1,2,5,9,6,4,8};
    cout<<largest(a)<<endl;
    cout<<smallest(a)<<endl;
    return 0;
}