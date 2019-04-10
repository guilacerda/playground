#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> ferraduras;
  int i, f;

  for(i = 0; i < 4; i++){
    cin >> f;
    ferraduras.insert(f);
  }

  cout << 4 - ferraduras.size() << '\n';

  return 0;
}
