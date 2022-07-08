#include<iostream>
#include<stack>
#include<queue>

using namespace std;

queue<int> reverse(queue<int> q){
    stack<int> s;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        s.push(curr);
    }

    while(!s.empty())
    {
        int curr = s.top();
        s.pop();
        q.push(curr);
    }

    return q;
}

int main()
{
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);

    queue<int> ans = reverse(q);

    while(!ans.empty())
    {
        cout<<ans.front()<<" ";
        ans.pop();
    }
}