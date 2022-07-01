#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(string str,string output,int index,vector<string>& ans)
{
    //base case
    if(index >= str.length())
    {
        if(str.length()!=0)
        {
            ans.push_back(output);
        }
        
        return;
    }
    //exclusion case
    solve(str,output,index+1,ans);

    //inclusion case

    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str,output,index,ans);
    return ans;
}

int main()
{
    vector<string> ans;
    string v = "abc";
    ans = subsequences(v);

   for(auto itr=ans.begin(); itr!=ans.end(); itr++)
   {
        cout<<*itr<<" ";
   }


    return 0;
}