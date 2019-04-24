#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, x, j, sumA = 0, sumB = 0;
  vector<int> a, b;
  vector<int>::iterator it;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x;
    a.push_back(x);
  }

  cin >> m;

  for(int i = 0; i < m; i++){
    cin >> x;
    b.push_back(x);
  }

  for(int i = 0; i < m; i++){
    it = find(a.begin(), a.end(), b[i]);
    sumA += distance(a.begin(), it) + 1;
  }

  reverse(a.begin(), a.end());

  for(int i = 0; i < m; i++){
    it = find(a.begin(), a.end(), b[i]);
    sumB += distance(a.begin(), it) + 1;
  }

  cout << sumA << " " << sumB << endl;

  return 0;
}
