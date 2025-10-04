#include<iostream>
#include<vector>

using namespace std;

//O(n^3)

void commonInThree(vector<int> &a,vector<int> &b,vector<int> &c){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            for(int k=0;k<c.size();k++){
                if(a[i] == b[j] && b[j]== c[k]){
                    cout<<a[i]<<endl;
                }
            }
        }
    }
}

// O(n1 * (log n2 + log n3))

bool BinarySearch(const vector<int> &a, int k){
    int l = 0;
    int h = a.size()-1;
    while(l<=h){
        int m = l + (h-l)/2;
        if(a[m] == k){
            return true;
        }
        else if(a[m]<k){
            l = m+1;  // Bug fix: should be l = m+1
        }
        else{
            h = m-1;  // Bug fix: should be h = m-1
        }
    }
    return false;
}

vector<int> findCommon(const vector<int> &a,const vector<int> &b,const vector<int> &c){
    vector<int> temp;
    for(int x : a){
        if(BinarySearch(b,x) && BinarySearch(c,x)){
            temp.push_back(x);
        }
    }
    return temp;
}

int main(){

    vector<int> a = {1,5,10,20,40,80};
    vector<int> b = {6,7,20,80,100};
    vector<int> c = {3,4,15,20,30,70,80,120};
    // commonInThree(a,b,c);
    vector<int> res = findCommon(a,b,c);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}