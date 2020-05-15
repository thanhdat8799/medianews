#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, sum = 0; cin >> a >> b;

  if(a > b) swap(a,b);

  for(; a <= b; a++){
    sum += a;
  }

  cout << sum;
}
