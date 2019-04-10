#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y, i, n[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

  cin >> x >> y;

  for(i = 0; i < 16; i++){
    if(n[i] == x){
      if (n[i+1] == y) {
        std::cout << "YES" << '\n';
        break;
      }else{
        std::cout << "NO" << '\n';
        break;
      }
    }
  }

  return 0;
}
