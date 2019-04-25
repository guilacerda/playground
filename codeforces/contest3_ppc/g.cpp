#include <bits/stdc++.h>

using namespace std;

int main(){
  int c, candies, i, aux;
  map<int, int> line;
  queue<int> q_line;

  cin >> c >> candies;

  for(i = 1; i <= c; i++){
    cin >> aux;
    line[i] = aux;
    q_line.push(i);
  }

  i = 1;
  while(q_line.size() > 1){

    if(line[i] - candies <= 0){
      q_line.pop();
      line[i] = 101;
    }else if(line[i] == 101){
      if(i == c)
        i = 0;

      i++;
      continue;
    }
    else{
      line[i] -= candies;
      q_line.push(q_line.front());
      q_line.pop();
    }

    if(i == c)
      i = 0;

    i++;
  }

  cout << q_line.front() << endl;
  return 0;
}
