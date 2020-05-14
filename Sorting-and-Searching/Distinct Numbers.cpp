#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int count = 1;
    sort(a.begin(), a.end());
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] != a[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
}