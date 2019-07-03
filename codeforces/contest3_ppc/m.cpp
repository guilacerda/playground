#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v;
  int n, id, i, aux, run, v_aux;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> v_aux;
    v.push_back(v_aux);
  }

  aux = v[0];
  id = 1;
  run = 1;

  for(i = 1; i < n; i++){
    if(v[i] < aux){
      aux = v[i];
      id = i+1;
      run = 1;
    }else if(aux == v[i]){
      run++;
    }
  }

  if(run == 1){
    cout << id << endl;
  }else{
    cout << "Still Rozdil" << endl;
  }
}
