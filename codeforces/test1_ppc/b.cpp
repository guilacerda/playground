#include <iostream>

using namespace std;

int main(){
  int count = 0;
  string aux;

  for(int i=0; i<51; i++){
    cin>>aux;

    if(aux[0]=='k')continue;

    else if(aux[0] == 'T' || aux[0] == 'J' || aux[0] == 'Q' || aux[0] == 'R'){
      if((count + 10) <= 21){
        count +=10;
        continue;
      }
      else{
        count -= 10;
        continue;
      }
    }

    else if(aux[0]== 'A'){
      if((count + 1)<=21){
        count +=21;
        continue;
      }
      else{
        continue;
      }
    }

    else{
      int a = (int)aux[0];
      a = (a - 48);
      if((count + a) <= 21){
        count +=a;
        continue;
      }
      else{
        continue;
      }
    }
  }

  cout << count << endl;

  return 0;
}
