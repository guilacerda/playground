#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, passagers, sum = 0, enter, exit, highest = 0;

  cin >> passagers;

  for(i = 0; i < passagers; i++){
    cin >> exit >> enter;

    sum += enter - exit;
    if(sum > highest)
      highest = sum;
  }

  cout << highest << endl;

  return 0;
}
