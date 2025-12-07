#include<iostream>
#include<string>
#include<cctype>

using namespace std;

bool is_palindrome(string str){
    int left = 0;
    int right = str.length()-1;
    while(left<=right){
        if(tolower(str[left])!=tolower(str[right])){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}


int main(){
    string str;
    cin>>str;
    cout<<is_palindrome(str)<<endl;
    return 0;
}