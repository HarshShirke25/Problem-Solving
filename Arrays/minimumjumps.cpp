#include<iostream>
#include<math.h>
using namespace std;
int minJumps(int arr[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    if(arr[0] == 0)
    {
        return -1;
    }

    int maxReach = arr[0];

    int steps = arr[0];

    int jump = 1;

    int i = 1;
    for(i = 1; i < n; i++)
    {
        if(i == n-1)
        {
            return jump;
        }

        maxReach = max(maxReach,i + arr[i]);

        steps--;

        if(steps == 0)
        {
            jump++;

            if(i >= maxReach)
            {
                return -1;
            }

            steps = maxReach - i;
        }

    }
}

int main()
{
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int size = sizeof(arr) / sizeof(int);

    int steps = minJumps(arr,size);

    cout<<"Minimum Steps required: "<<steps;

    return 0;
}