#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, b, it, sum = 0, maior, menor;

  cin >> n;
  cin >> a;
  menor = a;
  maior = a;

  for(it = 1; it < n; it++){
    cin >> b;

    if (b > a && b > maior) {
      maior = b;
      sum++;
    }else if(b < a && b < menor){
      menor = b;
      sum++;
    }
  }

  cout << sum << '\n';

  return 0;
}
