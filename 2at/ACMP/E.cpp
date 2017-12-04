#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    int m;
    cin >> m;
    string str[m];
    vector<int> v;
    vector<char> vc;
    int cnt = 0, cnt2 = 0;
    for(int i = 0; i < m; i++){
    	cin >> str[i];
    }
    for(int  i =0; i < s.length(); i++){
    	if(s[i] == '*') v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++){
    	for(int j = 0; j < m; j++){
    		vc.push_back(str[j][v[i]]);
    	}	
    }
    for(int i = 0; i < v.size(); i++){
    	for(int j = 0; j < m; j++){
    		for(int k = 0; k < str[j].length(); k++){
    			if(str[j][k] == str[j][v[i]] && k != v[i]){
    				 cnt++;
    				 
    			}
    		}

    		if(cnt == str[j].length()-1){
    		cnt2++;
    		}
    	}
    	cnt = 0;
    
    }
    
    

    for(int i = 0; i < vc.size(); i++){
    	cout << vc[i] << "\n";
    }
    //cout << cnt2;
    return 0;
	}
