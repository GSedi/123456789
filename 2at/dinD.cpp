#include <iostream>
#include <fstream>

using namespace std;
int d[8][8];
int main(){
//	freopen("king2.in", "r", stdin);
//	freopen("king2.out", "w", stdout);
    
    

    for(int i = 0; i<8; i++){
    	for(int j = 0; j< 8 ; j++){
    		cin >> d[i][j];
    	}
    
    }
    int t1 = 1001, t2 = 1001, t3 = 1001;
    for(int i = 7; i>=0; i--){
    	for(int j = 0; j < 8; j++){
    	    if(i+1 <= 7 && j-1 >= 0){ 
    	    	d[i][j] += min(d[i+1][j-1], min(d[i+1][j],d[i][j-1]));    		
    	    	continue;
    	    }
    	    if(j-1 >= 0) d[i][j] += min(d[i+1][j-1], d[i][j-1]);
    		if(i+1 <= 7) d[i][j] += min(d[i+1][j-1], d[i+1][j]);
    	}
    }
    cout << d[0][7];
    return 0;
	}