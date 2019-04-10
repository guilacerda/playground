#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np, kl, i, brindes = 0, cd;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  kl = k * l;
  cd = c * d;

  while(1){
    if(kl < nl*n || cd < 1*n || p < np*n){
      break;
    }else{
      brindes++;
      kl -= nl * n;
      cd -= 1 * n;
      p -= np * n;
    }
  }

  cout << brindes << '\n';

  return 0;
}
