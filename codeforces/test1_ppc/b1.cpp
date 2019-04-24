#include <bits/stdc++.h>

using namespace std;

int main(){
  string card;
  string aux;
  int i, sum = 0;

  for(i = 0; i < 51; i++){
    cin >> card;
    if(card[0] == 'T' || card[0] == 'J' || card[0] == 'Q' || card[0] == 'K'){
      sum += 10;
      if(sum > 21){
        sum -= 10;
        break;
      }
    }else if(card[0] == 'A'){
      sum += 1;
      if(sum > 21){
        sum -= 1;
        break;
      }
    }else{
      sum += (card[0]-48);

      if(sum > 21){
        sum -= (card[0]-48);
        break;
      }
    }
  }
  for(int a = i; a < 51; a++){
    cin >> card;
  }
  cout << sum << endl;
}
