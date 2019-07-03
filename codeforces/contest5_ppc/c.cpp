#include <bits/stdc++.h>

using namespace std;

int main(){
  queue <char> s;
  s.push('h');
  s.push('e');
  s.push('l');
  s.push('l');
  s.push('o');

  string st;
  cin >> st;

  for(auto x : st)
    if(x == s.front())
      s.pop();

  s.empty() ? cout << "YES" << endl : cout << "NO" << endl;  

  return 0;
}
