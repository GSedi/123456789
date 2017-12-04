#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;

    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
    
    	cin >> a[i];
    	cnt+= a[i];
    }
    if(x-cnt== n-1) {
    	cout << "YES";

    }

    else cout << "NO";

return 0;
}
