#include <bits/stdc++.h>

using namespace std;

int main(){
  int k, l, m, n;
  int d;

  cin >> k >> l >> n >> m >> d;

  int dragons[d], i, j, sum = 0;

  for(i = 0; i < d; i++){
    dragons[i] = 0;
  }

  for(i = 1, j = 0; i <= d; i++, j++){
    if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
      dragons[j] = 1;
    }
  }

  for(i = 0; i < d; i++){
    if(dragons[i] != 0)
      sum++;
  }

  cout << sum << '\n';

  return 0;
}
