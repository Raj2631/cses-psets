#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long a[n];
    for(long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //10 6 10 4 10 2 8 9 2 7 7
    long turns = 0;
    for (long i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
           turns += a[i] - a[i + 1];
           a[i + 1] = a[i];
        }
    }
 
    cout << turns << endl;
}