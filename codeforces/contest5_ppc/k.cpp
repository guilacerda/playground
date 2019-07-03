#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k, temp, a, now, pos;
  bool possible = true;

  cin >> n >> k;
  cin >> now;

  pos = n;
  temp = n;

  while(--temp){
    cin >> a;
    if(a != now){
      now = a;
      pos = temp;

      if(k <= n-pos){
        possible = false;

        break;
      }
    }
  }

  printf("%d\n", possible ? n - pos : -1);

  return 0;
}
