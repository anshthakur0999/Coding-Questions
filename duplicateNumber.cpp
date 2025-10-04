#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute Force -> O(n^2)
int bruteForceDoubleLoop(vector<int> a){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return -1;
}

//Sorting -> O(nlogn)
int sortingBetter(vector<int> &a){
    sort(a.begin(),a.end());
    for(int i=1;i<a.size();i++){
        if(a[i-1]==a[i]){
            return a[i];
        }
    }
    return -1;
}

int main(){
    vector<int> a = {1,3,4,2,2};
    cout<<bruteForceDoubleLoop(a)<<endl;
    cout<<sortingBetter(a)<<endl;
    return 0;
}