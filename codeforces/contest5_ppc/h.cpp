#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  multiset<char> m;
  set<char> unique;
  int impar=0;

  cin >> s;

  for(auto x : s){
    m.insert(x);
    unique.insert(x);
  }

  for(auto x : unique){
    impar += (m.count(x) % 2 != 0);
  }

  if(impar > 1)
    printf((impar-1)%2 == 0 ? "First\n" : "Second\n");
  else
    cout << "First" << endl;

  return 0;
}
