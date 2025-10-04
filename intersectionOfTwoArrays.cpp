#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

//Brute Force
vector<int> intersectionArrays(vector<int> &a,vector<int> &b){
    vector<int> temp;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                temp.push_back(a[i]);
                break;
            }
        }
    }
    return temp;
}

vector<int> intersection_unique_hash(const vector<int>& A, const vector<int>& B) {
    unordered_set<int> setA(A.begin(), A.end());
    unordered_set<int> ans;
    for (int x : B) {
        if (setA.count(x)) ans.insert(x);  // keeps it unique automatically
    }
    return vector<int>(ans.begin(), ans.end()); // order arbitrary
}

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> a = {1, 2, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};
    vector<int> result = intersectionArrays(a,b);
    display(result);

    return 0;
}