#include <iostream>
using namespace std;
int findArithSeq(int *arr, int i, int size, int d)
{
    if (i < 0)
    {
        return 0;
    }
    int ans = 0;
    // int prevD = i - 1;
    for (int k = i-1; k >= 0; k--)
    {
        if (arr[i] - arr[k] == d)
        {
            ans = max(ans, 1 + findArithSeq(arr, k, size, d));
        }
    }
    return ans;
}
int main()
{
    int arr[] = {9, 4, 7, 2, 10};
    int size = 5;
    int res = 0;
    // find seq
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int diff = arr[j] - arr[i];
            res = max(res, 2 + findArithSeq(arr, i, size, diff));
        }
    }

    cout << "Longest arithmatic seq. is " << res;

    return 0;
}