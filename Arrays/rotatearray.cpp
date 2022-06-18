#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    vector<int> temp(nums.size());

    for(int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }

    nums = temp;
}

int main()
{
    int k;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Enter the value of k: ";
    cin >> k;

    rotateArray(v,k);

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
}
