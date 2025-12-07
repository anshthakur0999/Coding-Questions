#include<iostream>
#include<algorithm>

using namespace std;

string reverse_no_str(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse_no_str(n)<<endl;
    return 0;
}