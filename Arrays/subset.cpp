#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans)
{
    //base case
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    //exclusion case
    solve(nums,output,index+1,ans);

    //inclusion case

    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums,output,index,ans);
    return ans;
}

int main()
{
    vector<vector<int>> ans;
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    ans = subsets(v);

   for (int i = 0; i < ans.size(); i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }


    return 0;
}