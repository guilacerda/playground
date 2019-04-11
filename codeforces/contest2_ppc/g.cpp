#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, n, t[2], sumEsq = 0, sumDir = 0, sum = 0;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> t[0] >> t[1];

    if(t[0] == 0)
      sumEsq++;

    if(t[1] == 0)
      sumDir++;
  }

  if(float(sumEsq) <= (n/2.0))
    sum += sumEsq;
  else
    sum += (n-sumEsq);

  if(float(sumDir) <= (n/2.0))
    sum += sumDir;
  else
    sum += (n-sumDir);

  cout << sum << endl;
  return 0;
}
