#include <iostream>
#include <fstream>

using namespace std;
int main(){
//	freopen("ladder.in", "r", stdin);
//	freopen("ladder.out", "w", stdout);
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    if(a[0] > 0) a[1] += a[0];
    for(int i = 2; i< n; i++){
       a[i] += max(a[i-1], a[i-2]);
    }

    cout << a[n-1];


    return 0;
	}