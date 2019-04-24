#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> v;
  int allV, vAux;

  cin >> allV;

  for(int i = 0; i < allV; i++){
    cin >> vAux;
    v.insert(vAux);
  }

  cout << v.size() << endl;

  return 0;
}
