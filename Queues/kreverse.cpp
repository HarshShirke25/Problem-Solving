#include<iostream>
#include<stack>
#include<queue>

using namespace std;

queue<int> reverse(queue<int> q,int k){
    stack<int> s;

    for(int i = 0; i<k ;i++){
        int curr = q.front();
        q.pop();
        s.push(curr);
    }

    for(int i = 0; i<k ;i++){
        int curr = s.top();
        s.pop();
        q.push(curr);
    }

    int t = q.size()-k;

    while(t--){
        int curr = q.front();
        q.pop();
        q.push(curr);
    }

    return q;
    
}

int main()
{
    queue<int> q;
    queue<int> p;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    int k = 3;
    queue<int> ans = reverse(q,k);

    while(!ans.empty())
    {
        int curr = ans.front();
        cout<<ans.front()<<" ";
        ans.pop();
        p.push(curr);
    }

}