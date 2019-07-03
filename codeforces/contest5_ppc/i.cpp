#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  string s;
  long long x1, y1, x2, y2, aux;

  cin >> t >> x1 >> y1 >> x2 >> y2;
  cin >> s;

  int i = 0;
  for(auto x : s){
    i++;
    if(x == 'E' && x1 < x2)
      x1++;
    else if(x == 'S' && y1 > y2)
      y1--;
    else if(x == 'W' && x1 > x2)
      x1--;
    else if(x == 'N' && y1 < y2)
      y1++;

    if(x1 == x2 && y2 == y1){
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}



          // negativo  positivo
//                   Y
// (0,3) (0,2) (3,1) | (0,0) (0,0) (0,0)
// (2,3) (2,2) (2,1) | (2,0) (2,0) (2,0)
// (1,3) (1,2) (1,1) | (1,0) (1,0) (1,0)
// (0,3)-(0,2)-(0,1)-x-(0,1)-(0,2)-(0,3) X
// (1,3) (1,2) (1,1) | (1,0) (1,0) (1,0)
// (2,3) (2,2) (2,1) | (2,0) (2,0) (2,0)
// (0,3) (0,2) (3,1) | (0,0) (0,0) (0,0)
