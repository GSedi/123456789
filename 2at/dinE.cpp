#include <iostream>
#include <fstream>

using namespace std;
int d[100][100];
int main(){
	
    int n; 
    cin >> n;
    
    for(int i = 1; i<= n; i++){
    	for(int j = 0; j < i; j++){
    		cin >> d[i][j];
    	}
    	
    }

    for(int i = n-1; i>=1; i--){
    	for(int j = 0; j<i; j++){
    		d[i][j] += max(d[i+1][j], d[i+1][j+1]);

    	}

    }

    cout << d[1][0];
    return 0;
	}