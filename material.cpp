//TIM SO DAU SO CUOI CUA NHUNG SO CO N CHU SO
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

// KIEM TRA SO NGUYEN TO
int isNgTo(int n){
	for(int i=2; i<n; i++){
		if(n%i==0) return 0;
	}
	return 1;

}

//KIEM TRA SO THUAN NGHICH
bool isPalindrome(int a){
  int reverse = 0;
  int n = a;
  while(n){
    reverse = reverse*10 + n%10;
    n /= 10;
  }
  return reverse == a;
}

//KIEM TRA TONG CAC CHU SO CO CHIA HET CHO 10 KHONG
bool chiaMuoi(int a){
  int sum = 0;
  int n = a;
  while(n){
    sum += n%10;
    n /= 10;
  }
  return sum % 10 == 0;
}

//KIEM TRA VA DOI CHO NEU A > B
if(a > b) swap(a,b);
