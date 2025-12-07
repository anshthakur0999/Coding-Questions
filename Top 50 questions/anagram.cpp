#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool is_anagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        return true;
    }
    return false;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<is_anagram(str1,str2)<<endl;
    return 0;
}