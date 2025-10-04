#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sortedArrays(vector<int> &a,vector<int> &b){
    vector<int> temp;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(b[j]);
            j++;
        }
    }

    while(i<a.size()){
        temp.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        temp.push_back(b[j]);
        j++;
    }
    return temp;
}

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){

    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {7,8,9};
    vector<int> result = sortedArrays(a,b);
    display(result);
    return 0;
}