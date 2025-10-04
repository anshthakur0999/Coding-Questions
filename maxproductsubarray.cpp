#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

//Brute Force
int maxSubarrayProd(vector<int> a){
    int maxProd = INT_MIN;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            int product = 1;
            for(int k=i;k<=j;k++){
                product = product * a[k];
            }
            maxProd = max(product,maxProd);
        }
    }
    return maxProd;
}

int main(){

    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxSubarrayProd(a);
    return 0;
}