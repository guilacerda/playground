#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, m, n, despesa_limite = 0, despesas = 0, tenho = 0, aux;
  cin >> m >> n;

  for(i = 0; i < n; i++){
    cin >> aux;

    tenho += aux;

    if(tenho < 0 && tenho < despesas){
      despesas = tenho;
    }
  }

  if(despesas + m < 0){
    cout << -1 << endl;
  }else{
    cout << abs(despesas) << endl;
  }

  return 0;
}
