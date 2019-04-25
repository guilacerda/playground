#include <bits/stdc++.h>

using namespace std;

int main(){
  map<int, int> m;
  int n, j, pages;

  cin >> n;

  for(j = 1; j <= 7; j++){
    cin >> pages;
    m[j] = pages;
  }

  j = 1;
  while(n > 0){
    if((n - m[j]) <= 0){
      break;
    }
    else{
      n -= m[j];
    }
    if(j == 7){
      j = 1;
      continue;
    }
    j++;
  }

  cout << j << endl;

  return 0;
}
