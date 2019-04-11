#include <bits/stdc++.h>

using namespace std;

int main(){
  int j, n, soldier, i, soldierMaPos = 0, soldierMePos = 0, menor = 0, maior = 0, count = 0;
  vector<int> soldiers;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> soldier;
    soldiers.push_back(soldier);
  }

  menor = soldiers[0];
  maior = soldiers[0];

  for(i = 0; i < n; i++){
    if(soldiers[i] <= menor){
      menor = soldiers[i];
      soldierMePos = i;
    }

    if(soldiers[i] > maior){
      maior = soldiers[i];
      soldierMaPos = i;
    }
  }

  if(soldierMaPos > soldierMePos){
    soldierMePos++;
    count = soldierMaPos + ((n-1) - soldierMePos);
  }else{
    count = soldierMaPos + ((n-1) - soldierMePos);
  }

  cout << count << endl;
  return 0;
}
