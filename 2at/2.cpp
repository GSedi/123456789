#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){
   long long n, k, m;
   cin >> n >> k >> m;

   long long a[n];

   for(long long i = 0; i < n;i++){
   	cin >> a[i];
   }
   long long cnt = 0;
   vector<long long> v;
   for(long long i = 0; i < n; i++){
   		for(long long j = 0; j < n; j++){
   			if(i!= j && abs(a[i]-a[j])%m == 0){ 
   				cnt++;
   					v.push_back()
   				}
   			
   		}
   }
   cout << "No";

return 0;
}