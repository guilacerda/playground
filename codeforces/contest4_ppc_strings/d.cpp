#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, i;
  cin >> n;
  string s;
  cin >> s;

  long long count = 0;

  for(i = 0; i < n; i++){
    long long temp = s[i] - 48;

    if(temp % 2 == 0)
      count += (i + 1);
  }

  cout << count << endl;
  return 0;
}
