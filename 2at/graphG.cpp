#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int n,m,src, dest, b, e, w;
int a[1000][1000]; 

int used[1000];

int  d[1000];
int p[1000];

const int INF = 1e6;

int main(){
//    freopen("distance.in", "r", stdin);
//    freopen("distance.out", "w", stdout);
	
	scanf("%d %d %d %d", &n, &m, &src, &dest);
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <=n; j++){
			a[i][j] = INF;
		}
		
	}

	for (int i = 1; i <= m; i++){
			scanf("%d %d %d", &b, &e, &w);
			
			a[b][e] = w;
			a[e][b] = w;
		
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
			if (a[u][v] > -1  && used[v] == 0 && d[u] != 10000){
				if (d[u] + a[u][v] < d[v]){
					d[v] = d[u] + a[u][v];
					p[v] = u;
				}
			}
		}
	
	
	}
	
	if(d[dest] == INF) printf("%d", -1);
	else{
		printf("%d \n", d[dest]);

		vector<int> path;
		int q;
		for (int v=dest; v!=src; v=p[q]){

			path.push_back (v);
			q = v;

		}
		path.push_back (src);
		vector<int> rev;
		
		for(int i= path.size()-1; i >= 0 ; i--){
			rev.push_back(path[i]);
		}
		
		reverse(path.begin(), path.end());
		for(int i = 0; i< path.size(); i++)
			printf("%d ", rev[i]);
		
	
	}

	return 0;
}

