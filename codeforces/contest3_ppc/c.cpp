#include <bits/stdc++.h>

using namespace std;

int main(){
  int j = 0, i, n, f[3], sum = 0, a,b, c;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> f[0] >> f[1] >> f[2];

    if(f[0] == 1)
      sum++;
    if(f[1] == 1)
      sum++;
    if(f[2] == 1)
      sum++;

    if(sum >= 2)
      j++;

    sum = 0;
  }

  cout << j << endl;

  return 0;
}
