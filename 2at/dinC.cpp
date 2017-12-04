#include <iostream>
#include <fstream>

using namespace std;
int d[51][51];
int main(){
	freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    d[0][0] = 1;

    for(int i = 0; i<n; i++){
    	for(int j = 0; j< m ; j++){
    		if(i-2 >= 0 && j-1 >= 0){
    			d[i][j] += d[i-2][j-1];
    		}
    		if(i-1 >=0 && j-2 >= 0){
    		   d[i][j] +=  d[i-1][j-2]; 
    		}
    	}
    }
    cout << d[n-1][m-1];
    return 0;
	}