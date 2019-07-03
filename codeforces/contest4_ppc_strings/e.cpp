#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, n;
  string aux;
  vector<string> v;
  vector<string>::iterator it;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> aux;

    if(i == 0){
      v.push_back(aux);
      cout << "NO" << endl;
    }else{
      it = find (v.begin(), v.end(), aux);
      if(it != v.end()){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }

    v.push_back(aux);
  }

  return 0;
}
