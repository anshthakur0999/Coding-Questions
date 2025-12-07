#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

void repeating_chars(string str){
    unordered_map<char,int> freq;
    for(char c:str){
        freq[c]++;
    }
    
    for(char c: str){
        if(freq[c]==1){
            cout<<c<<" ";
        }
    }

}

int main(){
    string str;
    cin>>str;
    repeating_chars(str);
    return 0;
}