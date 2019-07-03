#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, a, countX = 0, countA = 0, countD = 0;

  cin >> a;
  char b[a];
  int sub = 0;

  for(i = 0; i < a; i++){
    cin >> b[i];

    if(b[i] == 'x'){
      countX++;
      if(countX >= 3 && (i+1) == a){
        sub += (countX-2);
      }
    }
    else{
      if(countX >= 3)
        sub += (countX-2);

      countX = 0;
    }
  }

  cout << sub << endl;
  return 0;
}
