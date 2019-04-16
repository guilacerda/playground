#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b;
  int d;
  cin >> a >> b >> d;

  if(b == "Terra"){
    if(a == "Terra"){
      cout << d << endl;
    }
    else if(a == "Agua"){
      cout << d/2 << endl;
    }
    else if(a == "Ar"){
      cout << d*2 << endl;
    }
    else if(a == "Fogo"){
      cout << "0" << endl;
    }
  }
  else if(b == "Fogo"){
    if(a == "Fogo"){
      cout << d << endl;
    }
    else if(a == "Ar"){
      cout << d/2 << endl;
    }
    else if(a == "Agua"){
      cout << d*2 << endl;
    }
    else if(a == "Terra"){
      cout << "0" << endl;
    }
  }
  else if(b == "Agua"){
    if(a == "Agua"){
      cout << d << endl;
    }
    else if(a == "Fogo"){
      cout << d/2 << endl;
    }
    else if(a == "Terra"){
      cout << d*2 << endl;
    }
    else if(a == "Ar"){
      cout << "0" << endl;
    }
  }
  else if(b == "Ar"){
    if(a == "Ar"){
      cout << d << endl;
    }
    else if(a == "Terra"){
      cout << d/2 << endl;
    }
    else if(a == "Fogo"){
      cout << d*2 << endl;
    }
    else if(a == "Agua"){
      cout << "0" << endl;
    }
  }
}
