#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b, aux;
  int count = 2, i;
  multiset<char> s1, s2;

  cin >> a >> b;


  if(a.size() == b.size()){
    for(i = 0; i < a.size(); i++){
      s1.insert(a[i]);
      s2.insert(b[i]);
    }
    if(s1 == s2){
      for(i = 0; i < a.size(); i++){


        if(a[i] != b[i]){
          count--;
        }

        if(count < 0){
          cout << "NO" << endl;

          return 0;
        }
      }
    }
  }else{
    cout << "NO" << endl;

    return 0;
  }

  if(count == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
