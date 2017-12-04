#include <iostream>
#include <fstream>

using namespace std;



struct edge {
	int a, b, cost;
};
 
int n, m, v;
edge e[10000];
const int INF = 1000000000;
int d[10000]; 
void solve() {
	
	d[v] = 0;
	for (int i=0; i<n-1; ++i)
		for (int j=0; j<m; ++j)
			if (d[e[j].a] < INF)
				d[e[j].b] = min (d[e[j].b], d[e[j].a] + e[j].cost);
	// вывод d, например, на экран
}


int main(){
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> n >> m >> v;
	edge ed;
	for(int i = 0; i< m; i++){
		
		cin >> ed.a >> ed.b >> ed.cost;
		ed.a -=1;
		ed.b -=1;
		//cout << ed.a << ed.b << ed.cost <<endl;
		e[i] = ed;
	}

	for(int i = 0; i<n; i++){
		d[i] = INF;
	}
	  v-=1;	
	solve();

	for(int i = 0; i< n; i++){
		cout << d[i] << " ";
	}




return 0;
}