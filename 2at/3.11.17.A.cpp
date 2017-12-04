#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;

    if(s.length() < 7){
    	cout << "no";
    	return 0;
    }

    int cnt = 0;
    for(int i = 0; i< s.length(); i++){
    	if(s[i] == '1'){
    		for(int j = i+1; j< s.length(); j++){
    			if(s[j] == '0'){
    				cnt++;
    				if(cnt >= 6){
    					cout << "yes";
    					return 0;
    				}
    			}	
    		}
    		cnt = 0;

    	}
    }

    if(cnt  < 6){
    	cout << "no";
    }
    else{
    	cout << "yes";
    }

    return 0;
	}