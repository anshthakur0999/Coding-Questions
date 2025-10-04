#include<iostream>
#include<vector>
using namespace std;

vector<int> reversingArray(vector<int> &b){
    int i=0;
    int j=b.size()-1;
    while(i<=j){
        swap(b[i],b[j]);
        i++;
        j--;
    }
    return b;
}

void print(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = reversingArray(a);
    print(b);

    return 0;
}