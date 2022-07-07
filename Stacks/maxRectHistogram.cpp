#include<bits/stdc++.h>
using namespace std;


vector<int> nextSmaller(vector<int> v,int n)
{
	stack<int> st;
	st.push(-1);
	vector<int> ans(n);
	for(int i = n-1; i >= 0; i--){
		int curr = v[i];
		while(st.top()!=-1 && v[st.top()] >= curr){
			st.pop();
		}
		ans[i] = st.top(); 
		st.push(i);
	}
	
	return ans;
}


vector<int> prevSmaller(vector<int> v,int n)
{
	stack<int> st;
	st.push(-1);
	vector<int> ans(n);
	for(int i = 0; i < n; i++){
		int curr = v[i];
		while(st.top()!=-1 && curr <= v[st.top()]){
			st.pop();
		}
		ans[i] = st.top(); 
		st.push(i);
	}
	
	return ans;
}

int largestRectangularArea(vector<int>& heights){
    int n = heights.size();

    vector<int> next(n);
    next = nextSmaller(heights,n);
    vector<int> prev(n);
    next = prevSmaller(heights,n);

    int area = INT_MIN;
    for(int i = 0; i < n; i++){
        int l = heights[i];
       

        if(next[i]==-1)
        {
            next[i] = n;
        }

        int b = next[i] - prev[i] -1;
        int newArea = l*b;
        area = max(area,newArea);
    }
    return area;
}

int main()
{
	
	vector<int> v;
    int ans;
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
	v.push_back(6);
    v.push_back(2);
    v.push_back(3);
	
	ans = largestRectangularArea(v);

    cout<<"Area is "<<ans<<endl;

    

	
}