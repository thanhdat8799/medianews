#include <bits/stdc++.h>
using namespace std;

void draw(int n){
  int a = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j ++){
      cout << a++ << " ";
    }
    cout << endl;
  }
}

int main() {
  int a;
  cin >>a;

  draw(a);

}
