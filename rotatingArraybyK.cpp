#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Extra space
vector<int> rotateArray(vector<int> &a,int k){
    int n = a.size();
    vector<int> temp;
    for(int i=n-k;i<n;i++){
        temp.push_back(a[i]);
    }
    for(int j=0;j<n-k;j++){
        temp.push_back(a[j]);
    }
    return temp;
}


//In place
vector<int> rotateArrayInPlace(vector<int> &a,int k){
    int n = (int)a.size();
    if (n == 0) return;
    k %= n; if (k < 0) k += n;
    if (k == 0) return;
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    return a;
}

void print(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> a = {1,2,3,4,5};
    // vector<int> result1 = rotateArray(a,2);
    vector<int> result2 = rotateArrayInPlace(a,2);
    // print(result1);
    print(result2);
    return 0;
}