// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: O. Pyramid

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}