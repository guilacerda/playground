#include <bits/stdc++.h>

using namespace std;

int main(){
  double n, a, sum = 0.0;
  int i;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> a;
    sum += a;
  }
  cout << setprecision(14);
  cout << sum/n << '\n';
  return 0;
}
