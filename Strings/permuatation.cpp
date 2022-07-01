#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,vector<vector<int>>& ans,int index)
{
    //base case
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int j=index;j<nums.size();j++)
    {
        swap(nums[index],nums[j]);
        solve(nums, ans, index+1);
        //backtrack
        swap(nums[index],nums[j]);
    }
}


vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums,ans,index);
    return ans;
}


int main()
{
    vector<vector<int>> ans;

    vector<int> digits;

    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);

    ans = permute(digits);

    for (int i = 0; i < ans.size(); i++) {
        for (
            auto itr = ans[i].begin();
            itr != ans[i].end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }


    return 0;
}