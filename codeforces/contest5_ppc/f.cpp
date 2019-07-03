#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

int main(){
    long long n, t1 = 0, t2 = 0;
    int mn = INF, mx = 0, a[200005];

    cin >> n;

    for (auto i = 0; i < n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    for (auto i = 0; i < n; i++){
      t1 += (a[i] == mn);
      t2 += (a[i] == mx);
      cout << "t1 " << t1 << endl << "t2 " << t2 << endl;
    }

    cout << mx - mn << " ";

    if (mn == mx)
        cout << n * (n - 1) / 2 << endl;
    else
        cout << t1 * t2 << endl;

    return 0;
}
