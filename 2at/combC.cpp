#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int main(){
	freopen("success.in", "r", stdin);
	freopen("success.out", "w", stdout);
    int n;
    cin >> n;
 	string s = "";
 	int k;
 	for(int i = 1; i <=n; i++){
 		cin >> k;
 		s+=k + 48;
 	}
 	if(next_permutation(s.begin(), s.end())){
		for(int i = 0; i< s.length(); i++){
        	cout << s[i] << " ";
        }
        //cout << endl; 		
 	}  
 	else{
 		for(int i = 1; i<= n; i++){
 			cout << i<<" ";
 		}
 	}


	return 0;
}
