#include <bits/stdc++.h>
using namespace std;
int leaderofgame(  int arr[], int n)
{
    int maxvalue = arr[n - 1];
    stack<int> s;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= maxvalue)
        {
            s.push(arr[i]);
            maxvalue = arr[i];
        }
        while ( !s.empty()){
            ans.push_back(s.top());
            s.pop();
            // return ans;
        }
        
    }
}
int main()
{
    int arr[10] = {45, 12, 76, 98, 123, 23, 50, 68, 38, 406};
    int n = 10;
    leaderofgame(arr, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << "your ans is " <<  leaderofgame(arr, 10) << " " << endl;
    }

    return 0;
}