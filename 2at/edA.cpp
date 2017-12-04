#include <iostream>
using namespace std;
int main(){
   int n, t;
   cin >> n >> t;

   int a[n];

   for(int i = 0; i < n; i++){
   		cin >> a[i];

   }

   int x, cnt = 0;
   for(int i = 0; i < n; i++){
   		x = 86400 - a[i];
   		t -= x;
   		cnt++;
   		if(t <= 0){
   			break;
   		}
   }
   cout << cnt;
return 0;
}