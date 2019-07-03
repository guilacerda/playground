#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  vector<int> v1;
  vector<int> v;
  cin >> a >> b;
  int aux;

  for(auto i = 0; i < b; i++){
    cin >> aux;
    v.push_back(aux);
  }

  sort(v.begin(), v.end());

  int i = 0;

  for(auto x : v){
    v1.push_back(abs(x-(v.at(i+(a-1)))));

    i++;

    if((i+(a-1)) > (v.size()-1))
      break;
  }

  sort(v1.begin(), v1.end());

  for(auto x : v1){
    cout << x << endl;

    break;
  }



  return 0;
}
