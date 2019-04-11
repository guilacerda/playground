#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, i, start = 2;

  cin >> n;

  if(n % 2 == 0){
    for(i = 0; i < n/2; i++){
      if(start == n){
        cout << start << " " << (start - 1) << endl;
      }
      else{
        cout << start << " " << (start - 1) << " ";
        start += 2;
      }
    }
  }else{
    cout << -1 << endl;
  }


  return 0;
}
