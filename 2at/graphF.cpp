#include <iostream>
#include <fstream>

using namespace std;

int n, src, dest;
int a[2001][2001]; //adj matrix 

int used[2001];

int  d[2001];

int main(){
        //freopen("dijkstra.in", "r", stdin);
       // freopen("dijkstra.out", "w", stdout) ;
	scanf("%d", &n);
	scanf("%d", &src);
	scanf("%d", &dest);
	for (int i = 1; i <= n; i++){
                 d[i] = 10000;
		for (int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}

        int mini_d, u;
	
	d[src] = 0;

	for (int i = 1; i <= n; i ++){
		 mini_d = 10000;
		 u = -1;
		for (int j = 1; j <= n; j++){
			if ((d[j] < mini_d || u ==-1) && used[j] == 0){
				mini_d = d[j];
				u = j;
			}
		}
		if(d[u] == 10000) break;
		used[u] = 1;
		for (int v = 1; v <= n; v++){
			if (a[u][v] > -1  && used[v] == 0 && d[u] != 10000){
				if (d[u] + a[u][v] < d[v]){
					d[v] = d[u] + a[u][v];
				//	p[v] = u;
				}
			}
		}
	
	
	}
	
	if(d[dest] == 10000)  printf("%d", -1);
	else printf("%d", d[dest]); 
	
	return 0;
}