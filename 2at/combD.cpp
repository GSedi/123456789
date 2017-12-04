#include <iostream>
#include <fstream>
using namespace std;
int a[1000];
int n, m;
void f(int v, int k){
	if(v==m){
		for(int i = 0; i < m; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else{
		for(int i = k; i<=n; i++){
			a[v] = i;
			//cout << a[v];
			f(v+1, i+1);
		}
	}	

}
int main(){
   // freopen("choose.in", "r", stdin);
  //  freopen("choose.out", "w", stdout);

                     
    cin >> n >> m;                                                            

    
    f(0, 1);

    return 0;
	}