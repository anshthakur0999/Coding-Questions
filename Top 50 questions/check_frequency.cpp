#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

void print_char_freq(string str){
    unordered_map<char,int> freq;
    for(char c:str){
        freq[c]++;
    }
    for(auto &p:freq){
        cout<<p.first<<" appears "<<p.second<<" times"<<endl;
    }
}


int main(){
    string str;
    cin>>str;
    print_char_freq(str);
    return 0;
}