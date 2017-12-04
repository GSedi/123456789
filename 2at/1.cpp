#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,a, b, c;
	cin >> n >> a >> b >> c;
	int cnt = 0;
	
	int x =  min(a, b);		
	if(n == 1){
		cout << 0;
		return 0;
	}
	cnt+=x;		
	n = n-2;
	while(n!=0){
		cnt+=min(x, c);		
		n--;
	}
	cout << cnt;

return 0;
}