#include<iostream>
#include<vector>
using namespace std;

// Input:  [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]

vector<int> movingZeroes(vector<int> &a){
    int i = 0;
    int j = a.size()-1;
    while(i<j){
        if(a[i] == 0){
            if(a[j] != 0){
                swap(a[i],a[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else if(a[i] != 0){
            i++;
        }
    }
    return a;
}

//Count method
vector<int> movingZeroesCount(vector<int> &a){
    int countZero = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            countZero++;
        }
    }

    vector<int> temp;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    for(int i=0;i<countZero;i++){
        temp.push_back(0);
    }
    return temp;
}

void display(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    vector<int> a = {0, 1, 0, 3, 12};
    // vector<int> result = movingZeroes(a);
    vector<int> result2 = movingZeroesCount(a);
    display(result2);
    return 0;
}