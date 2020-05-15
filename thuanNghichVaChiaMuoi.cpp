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

bool chiaMuoi(int a){
  int sum = 0;
  int n = a;
  while(n){
    sum += n%10;
    n /= 10;
  }
  return sum % 10 == 0;
}

int soDau(int n){
  int res = (n == 1) ? 0 : 1;
  for(int i = 1; i < n; i++){
    res *= 10;
  }
  return res;
}

int soCuoi(int n){
  int res = 9;
  for(int i = 1; i < n; i++){
    res = res*10 + 9;
  }
  return res;
}



int main() {
  int a, count = 0; cin >> a;

  for(int i = soDau(a); i < soCuoi(a); i++){
    if(chiaMuoi(i) && isPalindrome(i) ){
      count++;
    }
  }

  cout << count;
}
