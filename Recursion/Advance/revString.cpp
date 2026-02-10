#include<iostream>
using namespace std;
void revstring(int i, int j, string &s){
    if(i >= j) return;
    swap(s[i],s[j]);
    revstring(i+1,j-1,s);
}
int main(){
    string s = "abcde";
    revstring(0,s.length()-1,s);
    cout<<s;
    return 0;
}