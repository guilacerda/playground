#include <bits/stdc++.h>

using namespace std;

int main(){
  queue< pair<int, int> > line;
  pair<int , int> aux_line;
  int i, n, candies, aux;

  cin >> n >> candies;

  for(i = 1; i <= n; i++){
    cin >> aux;
    line.push(make_pair(i, aux));
  }

  while(line.size() > 1){
    if(line.front().second <= candies){
      line.pop();
    }else{
      aux_line = make_pair(line.front().first, line.front().second - candies);
      line.pop();
      line.push(aux_line);
    }
  }

  cout << line.front().first << endl;


  return 0;
}
