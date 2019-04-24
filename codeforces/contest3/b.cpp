#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, s2;
  char c, b;
  int a1 = 0, a2 = 0, result = 0, s1, s3;

  cin >> s >> s2;

  for(int i = 0; i < s.length(); i++){
    c = tolower(s[i]);
    b = tolower(s2[i]);
    s1 = (int) c;
    s3 = (int) b;

    if(s1 < s3){
      result = -1;
      break;
    }
    else if(s1 > s3){
      result = 1;
      break;
    }
    else{
      result = 0;
    }
  }

  cout << result << endl;

  return 0;
}
