#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
	freopen("ladder.in", "r", stdin);
	freopen("ladder.out", "w", stdout);
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i<n; i++){
    	cin >> a[i];
    }
    int dp[n];
   	int ans = 0, k, m; 
   	dp[n-1] = a[n-1];
    for(int i = n-2; i>=0; i--){
    	 if(a[i] > 0) dp[i] = dp[i+1] + a[i];
    	 else dp[i] = 0;
    //	 cout << dp[i] << " \n";
    	
    }

    int maxi = 0;
    for(int i = 0; i < n; i++){
    	if(maxi <= dp[i]) maxi = dp[i];
    }
		cout << maxi;
    return 0;
	}