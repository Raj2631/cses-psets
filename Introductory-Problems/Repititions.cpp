#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
  
    int count = 1, maxi = 1;
    char prev = n[0];
    for (int i = 1; i < n.length(); i++)
    {
        if (prev == n[i])
        {
            count++;
            if (maxi < count)
            {
                maxi = count;
            }
        }
        else 
        {
          
            count = 1;
        }
 
        prev = n[i];
    }
    cout << maxi << endl;
 
}
