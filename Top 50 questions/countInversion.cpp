#include<iostream>
#include<vector>

using namespace std;


int inversionCount(vector<int> a){
    int count = 0;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(i<j && a[i]>a[j]){
                count++;
            }
        }
    }
    return count;
}


int main(){
    vector<int> a = {1, 20, 6, 4, 5};
    cout<<inversionCount(a);
    return 0;
}