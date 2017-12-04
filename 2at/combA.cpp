#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int main(){
	freopen("perm.in", "r", stdin);
	freopen("perm.out", "w", stdout);
    int n;
    cin >> n;
 	string s = "";
 	for(int i = 1; i <=n; i++){
 		s+=i + 48;
 	}   
 	do
    {
        for(int i = 0; i< s.length(); i++){
        	cout << s[i] << " ";
        }
        cout << endl;
    } while(next_permutation(s.begin(), s.end()));


	return 0;
}
