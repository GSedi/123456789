#include <iostream>
using namespace std;

int d[1000][1000];
int n;
const int INF = 1000000;
int main(){
	
	freopen("input.txt", "r", stdin);
	cin >> n;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j <= n; j++){
			cin >> d[i][j];
		}
	}

	for (int k=1; k<=n; ++k)
		for (int i=1; i<=n; ++i)
			for (int j=1; j<=n; ++j)
			    if (d[i][k] > 0 && d[k][j] > 0 )
					d[i][j] = min (d[i][j], d[i][k] + d[k][j]);	


	int maxi = -1;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j <= n; j++){
		     cout << d[i][j] << " ";
			 if(d[i][j] >= maxi){
			 
			 	maxi = d[i][j];
			 }
		}
		cout << endl;
	}

	cout << maxi;
	return 0;
}
