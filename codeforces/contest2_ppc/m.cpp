#include <bits/stdc++.h>

using namespace std;

int main(){
  string name;
  set<char> tePeguei;
  int i;

  cin >> name;

  for(i = 0; i < name.length(); i++){
    tePeguei.insert(name[i]);
  }

  if(tePeguei.size() % 2 == 0)
    cout << "CHAT WITH HER!" << '\n';
  else
    cout << "IGNORE HIM!" << '\n';

  return 0;
}
