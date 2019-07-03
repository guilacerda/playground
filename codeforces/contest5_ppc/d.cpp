#include <bits/stdc++.h>

using namespace std;

int main(){

  long long qp, qp_aux, v, a;
  long long maxi = 0, mini = 0;
  vector<int> v1, v2;

  cin >> qp >> v;

  for(int i = 0; i < v; i++){
    cin >> a;
    v1.push_back(a);
  }

  sort(v1.begin(), v1.end());
  v2 = v1;
  reverse(v1.begin(), v1.end());
  qp_aux = qp;

  for(int i = 0; i < v && qp > 0; i++){
    do{
      sort(v1.begin(), v1.end(), greater<int>());
      qp--;
      maxi += v1[i];
      v1[i]--;
    }while(v1[i] >= 0 && qp > 0);
  }

  for(int i = 0; i < v && qp_aux > 0; i++){
    do{
      qp_aux--;
      mini += v2[i];
      v2[i]--;
    }while(v2[i] > 0 && qp_aux > 0);
  }

  cout << maxi << " " << mini << endl;

  return 0;
}
