#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, k, i, aux;

  cin >> n >> k;
  if(n%2 == 1 && ((n/2)+1) >= k){
    aux = (k*2) - 1;
  }else if(n%2 == 1 && ((n/2)+1) < k){
    aux = 2 * (k - ((n/2)+ 1));
  }else if(n % 2 == 0 && (n/2) >= k){
    aux = (k*2) - 1;
  }else{
    aux = 2 * (k - ((n/2)));
  }

  cout << aux << endl;
  return 0;
}
