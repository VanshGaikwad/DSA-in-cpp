#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    if(i > j) return true; //base case
    if(s[i] == s[j]){ ///recursive call
           return checkPalindrome(s,i+1,j-1);
        }
    else { return false; }

}


int main() {
    string name = "abba";
    int i = 0;
    int j = name.length()-1;
    if(checkPalindrome(name,i,j)){
        cout<<"its a palindrome"<<endl;

    }
    else{
         cout<<"its not a palindrome"<<endl;
    }
    return 0;
}