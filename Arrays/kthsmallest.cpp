#include<bits/stdc++.h>
using namespace std;
 

int kthSmallest(int arr[], int n, int k) {
      
    priority_queue<int> pq;
     
    for(int i = 0; i < k; i++)
    {           
      
        pq.push(arr[i]); 
    }
   
    for(int i = k; i < n; i++) 
    {
       
        if(arr[i] < pq.top())
        {
            pq.pop();
           
            pq.push(arr[i]);  
        }
    }
      
    return pq.top();   
}
 
 
int main()
{
    int n = 10;
    int arr[n] = {10, 5, 4 , 3 ,48, 6 , 2 , 33, 53, 10};
    int k = 4;
    cout<< "kth smallest Element is: "<<kthSmallest(arr, n, k);
 
}



//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int kthSmallest(int arr[], int n, int k)
//{
//	sort(arr, arr+n);
//	
//	return arr[k-1];
//}
//
//
//
//int main()
//{
//    int arr[] = { 12, 3, 5, 7, 19 };
//    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
//    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
//    return 0;
//}
