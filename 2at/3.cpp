#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n; 
    cin >> n;
    long long x = n, y, z;
    long long i = 0, cnt = 0;
    vector<long long> v;
    while(x!= 0 && i!=n ){
    	y = x;
        while (y>0){
            cnt +=y%10;
        	y=y/10;
        	
    	}
    	if(cnt == i){
    		v.push_back(x);
    	}
    	cnt = 0;
    	x--;
    	i++;
    
    }
    cout << v.size() << endl;
    for(long long j = 0; j < v.size(); j++){
    	cout << v[j] << endl;
    }

return 0;
}

