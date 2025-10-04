#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Brute Force
void findingPairBrute(vector<int> &a,int k){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j] == k){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
}

//Better
void findingPairBetter(vector<int> &a,int k){
    sort(a.begin(),a.end());
    int l = 0;
    int r = a.size()-1;
    while(l<r){
        int sum = a[l]+a[r];
        if(sum==k){
            cout<<a[l]<<" "<<a[r]<<endl;
            l++;
            r--;
        }
        else if(sum<k){
            l++;
        }
        else{
            r--;
        }
    }
}

int main(){

    vector<int> a = {1, 5, 7, -1, 5};
    // findingPairBrute(a,6);
    findingPairBetter(a,6);

    return 0;
}