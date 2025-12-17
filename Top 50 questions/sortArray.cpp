#include<iostream>
#include<vector>

using namespace std;

void sortArr(vector<int> &a){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}

int main(){
    vector<int> a = {52, 3, 19, 7, 88, 12, 45, 23, 100, 6, 0, 47};
    sortArr(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}