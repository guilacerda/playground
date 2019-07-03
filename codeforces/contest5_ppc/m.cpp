#include <bits/stdc++.h>

using namespace std;

int main(){
  multiset<char> m, m2;
  string s, s2;

  getline(cin, s);

  for(auto x : s){
    if(x != ' ')
      m.insert(x);
  }

  int aux;
  string a;

  getline(cin, a);

  for(auto x : a){
    if(x != ' '){
      aux = m.count(x);

      if(aux > 0){
        m.erase(x);
        aux--;

        while(aux > 0){
          m.insert(x);
          aux--;
        }
      }else{
        cout << "NO" << endl;
        return 0;
      }
    }
  }

  cout << "YES" << endl;

  return 0;
}
