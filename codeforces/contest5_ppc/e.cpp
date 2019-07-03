#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  char k;

  cin >> a >> b;

  char c[a][b];
  char d[a][b];

  for(auto i = 0; i < a; i++){
    for(auto j = 0; j < b; j++){
      cin >> k;
      c[i][j] = k;
    }
  }

  for(auto i = 1; i <= a; i++){
    if(i%2 != 0){
      for(auto j = 0; j < b; j += 2){
        if(c[i-1][j] == '-')
          d[i-1][j] = '-';
        else
          d[i-1][j] = 'B';
      }
      for(auto j = 1; j < b; j += 2){
        if(c[i-1][j] == '-')
          d[i-1][j] = '-';
        else
          d[i-1][j] = 'W';
      }
    }else{
      for(auto j = 0; j < b; j += 2){
        if(c[i-1][j] == '-')
          d[i-1][j] = '-';
        else
          d[i-1][j] = 'W';
      }
      for(auto j = 1; j < b; j += 2){
        if(c[i-1][j] == '-')
          d[i-1][j] = '-';
        else
          d[i-1][j] = 'B';
      }
    }
  }


  //printa a matriz
  for(auto i = 0; i < a; i++){
    for(auto j = 0; j < b; j++){
      cout << d[i][j];
    }

    cout << endl;
  }


  return 0;
}
