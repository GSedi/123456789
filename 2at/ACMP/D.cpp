#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    char c[n];
	vecyor<int> va, vp, ve;
    for(int i = 0; i < n; i++){
    
    	cin >> c[i];
    	if(c[i] == '*') va.push_back(i);
    	if(c[i] == 'p') vp.push_back(i);
    	if(c[i] == '.') ve.push_back(i);
    }
    for(int i = 0; i < n; i++){
    	if(i == va[i]){
    		
    	}
    }

    return 0;
	}