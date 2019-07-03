#include <bits/stdc++.h>

using namespace std;

int main(){
  long long sfor, qtd, dfor, dbonus;
  vector< pair<long long, long long> > v;

  cin >> sfor >> qtd;

  for(auto i = 0; i < qtd; i++){
    cin >> dfor >> dbonus;

    v.push_back(make_pair(dfor, dbonus));
  }

  sort(v.begin(), v.end());

  for(auto& x : v){

    if(x.first < sfor)
      sfor += x.second;
    else{
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}
