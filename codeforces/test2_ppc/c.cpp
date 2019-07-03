#include <bits/stdc++.h>

using namespace std;

int main(){
  char date[6];
  set <int> a;
  vector<int> v;
  scanf("%c%c/%c%c/%c%c", &date[0], &date[1], &date[2], &date[3], &date[4], &date[5]);

  for(auto i = 0; i < 6; i++){
    v.push_back((int) date[i]-48);
  }

  sort(v.begin(), v.end());
  int i = 0;
  do{
    i++;
  }while(next_permutation(v.begin(), v.end()));

  cout << i << endl;

  return 0;
}
