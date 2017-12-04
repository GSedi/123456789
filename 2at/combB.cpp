#include <iostream>
#include <fstream>
using namespace std;
int d[11];
int main(){
  //  freopen("inverse.in", "r", stdin);
  //  freopen("inverse.out", "w", stdout);

    int n;
    cin >> n;                                                            

    int a[n];

    for(int i = 1; i<=n; i++){
    	cin >> a[i];
    	d[a[i]] = i;
    }

    	
    for(int i = 1; i<=n; i++){
    	cout << d[i] << " ";
    }

   



    return 0;
	}