#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans;

    if(x1 == x2 || y1 == y2){
    	ans = (abs(abs(x1)- abs(x2)) + abs(abs(y1) - abs(y2)) + 2)*2+2;
    	cout << ans;
    	return 0;
    }
    ans = (abs(abs(x1)- abs(x2)) + abs(abs(y1) - abs(y2)) + 2)*2;
    cout << ans;



    return 0;
	}
	                               