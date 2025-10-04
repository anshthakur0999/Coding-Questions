#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int kthLargest(vector<int> &a,int k){
    sort(a.begin(),a.end());
    return a[a.size()-k];
}

int kthSmallest(vector<int> &a,int k){
    sort(a.begin(),a.end());
    return a[k-1];
}

int main(){
    vector<int> a = {1,2,8,7,6,10};
    int k = 2;
    cout<<kthLargest(a,k)<<endl;
    cout<<kthSmallest(a,k)<<endl;
    return 0;
}