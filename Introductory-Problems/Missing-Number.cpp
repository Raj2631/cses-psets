#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while (--n)
    {
        int i;
        cin >> i;
        a.push_back(i);
    }
 
    sort(a.begin(), a.end());
 
    if (a[0] != 1)
    {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        if ((a[i] + 1) != a[i + 1])
        {
            cout << a[i] + 1 << endl;
            return 0;
        }
    }
    cout << a[a.size() - 1] + 1 << endl;
    return 0;
}