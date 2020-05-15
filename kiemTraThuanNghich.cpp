#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int a){
  int reverse = 0;
  int n = a;
  while(n){
    reverse = reverse*10 + n%10;
    n /= 10;
  }
  return reverse == a;
}

int main() {
  int a; cin >> a;

  cout << isPalindrome(a);
}
