#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) 
{

    while (nums[0] != nums[nums[0]])
    {
        cout<<nums[0]<<" ";
        swap(nums[0], nums[nums[0]]);
        cout<<nums[0]<<endl;
    }   
    return nums[0];
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // for(auto itr = v.begin(); itr<v.end(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }

    int n = findDuplicate(v);

    // cout<<"Duplicate number is "<<n;


    return 0;
}