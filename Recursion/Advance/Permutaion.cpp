#include <iostream>
#include<vector>
using namespace std;

void solve(vector<int >nums,int index, vector<vector<int>> &ans){
        if(index >= nums.size()){ ans.push_back(nums); return;}
        for(int j = index ; j< nums.size(); j++){
            swap(nums[index], nums[j]);
            solve(nums,index+1,ans);
            // for backtracking we need to swap the element back to its original position
            swap(nums[index],nums[j]);
        }
    }



int main() {
    vector<int> nums = {1,2,3};
        vector<vector<int>> ans;
        int index = 0;
        solve(nums,index,ans);
        cout<<"[";
        for(auto i: ans){
            cout<<"[";
            for(auto j: i){
                cout<<j<<",";
            }
            cout<<"],";
        }
    return 0;
}
