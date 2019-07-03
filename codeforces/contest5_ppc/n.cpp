#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, aux, sum=0, q100=0, q200=0;
  bool result = false;

  cin >> a;

  for(auto i = 0; i < a; i++){
    cin >> aux;

    aux == 200 ? q200++ : q100++;
  }

  sum = (100 * q100) + (200 * q200);
  aux = 0;

  if(sum%200 != 0)
    cout << "NO" << endl;
  else{
    aux = sum/2;

    for(int i = 0; i <= q200; i++){
      if(i*200 <= aux && aux - 200 * i <= q100 * 100)
        result = true;
    }

    result ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
