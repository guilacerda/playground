#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, a, countA = 0, countD = 0;

  cin >> a;
  char b[a];

  for(i = 0; i < a; i++){
    cin >> b[i];

    if(b[i] == 'D'){
      countD++;
    }else{
      countA++;
    }
  }

  if(countA > countD)
    cout << "Anton\n";
  else if(countD > countA)
    cout << "Danik\n";
  else
    cout << "Friendship\n";

  return 0;
}
