#include<iostream>
#include<vector>

using namespace std;


void bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){

    vector<int> a = {5,6,1,2,3,10};
    bubbleSort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;
}