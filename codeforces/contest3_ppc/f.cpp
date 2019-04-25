#include <bits/stdc++.h>

using namespace std;

int main(){
  int friends, i, fingers, s_fingers = 0;
  set<int> victory;

  cin >> friends;

  for(i = 0; i < friends; i++){
    cin >> fingers;
    s_fingers += fingers;
  }

  friends++;

  i = 1;
  while(i <= 5){
    if((s_fingers+i) % friends != 1){
      victory.insert(i);
    }

    i++;
  }

  // for(int j = 0; j < victory.size(); j++)
  //   cout << victory[j] << endl;
  cout << victory.size() << endl;
  return 0;
}
