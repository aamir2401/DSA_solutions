#include <bits/stdc++.h>
using namespace std;
int findLIS(int arr[], int size, int prev, int curr)
{

    
    // baseCase
    if (curr == size)
    {
        return 0;
    }

    // including case
    int res1 = 0;
    if (prev == -1 || arr[curr] > arr[prev])
    {
        res1 = 1 + findLIS(arr, size, curr, curr + 1);
    }
    // excluding case
    //  int res2 = 0;

    int res2 = findLIS(arr, size, prev, curr+1);

    return max(res1, res2);
}
int main()
{
    int arr[] = {0, 1, 0, 3, 2, 3};
    int size = 6;
    int prevIdx = -1;
    int currIdx = 0;
    int res = findLIS(arr, size, prevIdx, currIdx);
    cout << "longest increasing subsequence is " << res << endl;
}