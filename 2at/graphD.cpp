#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

long long int n,m,src, dest, b, e, w;
long long int a[2002][2002]; 
long long int cd[100000];

long long int used[100000];

long long int  d[100000];


const int INF = 1e9;

int main(){
//    freopen("path.in", "r", stdin);
//    freopen("path.out", "w", stdout);
	
	scanf("%d %d %d", &n, &m, &src);

	for(int i = 1; i<= n; i++){
		for(int j = 1; j <=n; j++){
			a[i][j] = INF;
		}
		
	}

	for (int i = 1; i <= m; i++){
			cin >> b >> e >> w;
			
			a[b][e] = w;
			cd[i] = w;
			
		
	}
	

	for (int i = 1; i <= n; i++){
		d[i] = INF;
	}
	d[src] = 0;
	for (int i = 1; i <= n; i ++){
		int mini_d = INF;
		int u = -1;
		for (int j = 1; j <= n; j++){
			if ((d[j] < mini_d || u ==-1) && used[j] == 0){
				mini_d = d[j];
				u = j;
			}
		}
		if(d[u] == INF) break;
		used[u] = 1;
		for (int v = 1; v <= n; v++){
			if (a[u][v] > -1  && used[v] == 0 && d[u] != INF){
				if (d[u] + a[u][v] < d[v]){
					d[v] = d[u] + a[u][v];
					
				}
			}
		}
	
	
	}

	for(int i = 1; i<=n; i++){
		if(d[i] == INF) printf("%c \n", '*');
		else if(d[i] < cd[i]) printf("%d \n", d[i]);
		else printf("%c \n", '-');

		cout << cd[i] << " "  << d[i] << "\n" ;
	}
	
	return 0;
}

