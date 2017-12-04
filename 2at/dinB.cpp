#include <iostream>
#include <fstream>
int d[1001];
using namespace std;
int main(){
//	freopen("lepus.in", "r", stdin);
//	freopen("lepus.out", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i< s.length(); i++){
    	if(s[i] == 34){
    		d[i] =1;
    			
    	}
    	else if(s[i] == 'w') d[i] = -1;
    	else d[i] = 0;


    }
    
    for(int i = 1; i < s.length(); i++){
 //   cout << d[i] << " ";
        if(i>=5){
    		d[i] += max(d[i-1], max(d[i-3], d[i-5]));
    		continue;
    	}
    	else if(i>=3){
			d[i] += max(d[i-1],d[i-3]);    	
			continue;
    	}
    	else if(i < 3){
    	    
    		d[i] += d[i-1];
    	}
    	    	
    	
    }
    if(d[n-1] >= 0){
    cout << d[n-1];
    }
    else cout << -1;
   	return 0;
	}