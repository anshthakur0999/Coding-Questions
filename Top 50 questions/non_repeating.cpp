#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> findNonRepeating(vector<int> &arr){
    unordered_map<int,int> freq;
    for(int num:arr){
        freq[num]++;
    }

    vector<int>result;
    for (int num : arr) {
        if (freq[num] == 1) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    vector<int> arr = {4, 5, 4, 3, 6, 3, 7};
    vector<int> ans = findNonRepeating(arr);
    
    cout << "Non-repeating elements: ";
    for (int x : ans) cout << x << " ";
    return 0;
}