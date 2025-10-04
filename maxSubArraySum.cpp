#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxSubarraySum(vector<int> a){
    int current_max = a[0];
    int global_max = a[0];
    for(int i=0;i<a.size();i++){
        current_max= max(a[i], current_max + a[i]);
        global_max = max(global_max,current_max);
    }
    return global_max;
}

int main(){

    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxSubarraySum(a);
    return 0;
}