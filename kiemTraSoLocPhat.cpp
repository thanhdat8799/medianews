#include <bits/stdc++.h>
using namespace std;

bool isLocPhat(int n){
  while(n){
    if(n%10 != 0
    && n%10 != 6 && n%10 != 8) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  int a; cin >> a;

  cout << isLocPhat(a);
}
