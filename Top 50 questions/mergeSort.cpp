#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &a,int start,int mid,int end){
    vector<int> temp;
    int i=start;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(a[i]<=a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(a[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++){
        a[idx+start] = temp[idx];
    }
}

void mergeSort(vector<int> &a,int start,int end){
    if(start<end){
        int mid = start + (end-start)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

int main(){
    vector<int> a = {12,31,35,8,32,17};
    mergeSort(a,0,a.size()-1);
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}