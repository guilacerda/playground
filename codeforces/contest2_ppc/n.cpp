#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b, c;
  multiset <char, greater <int> > ab, cab;
  int i, sumAB = 0, sumC = 0;

  cin >> a >> b >> c;

  for(i = 0; i < a.length(); i++)
    ab.insert(a[i]);

  for(i = 0; i < b.length(); i++)
    ab.insert(b[i]);

  for(i = 0; i < c.length(); i++)
    cab.insert(c[i]);

  if(ab == cab){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
