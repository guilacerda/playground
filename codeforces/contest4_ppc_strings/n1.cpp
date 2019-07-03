#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, i;
  cin >> n;
  int aux, sum = 0, count = 0;

  for(i = 19; i < 11000000; i += 9){
    aux = i;

    while(aux){
      sum += aux % 10;
      aux /= 10;
    }


    if(sum == 10){
      count++;
      if(count == n){
        cout << i << endl;
        break;
      }
    }

    sum = 0;
  }
  return 0;
}
