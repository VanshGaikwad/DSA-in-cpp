#include<iostream>
using namespace std;
// create an array of count of character
char getMaxChar(string s){
    int freq[26]={0};
    
    
    for(int i= 0 ;i<s.length(); i++){
        char ch = s[i];
        // to lowercase
        int number = 0;
        
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{ //uppercase
            number = ch - 'A';
        }
        freq[number]++;
    }
    // find maximum occ character
    int maxi = -1; int ans =0;
    for(int i = 0; i < 26; i++){
        if(maxi < freq[i]){
            maxi = freq[i];
            ans = i;
        }
    }
    char finalAns = 'a'+ ans;
    return finalAns;
}


int main (){
    string s;
    cout<<"enter a string:"<<endl;
    cin>> s ;
    cout<<getMaxChar(s)<<endl;
    return 0;

    
}