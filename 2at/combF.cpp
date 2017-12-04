#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<vector<int> > vec;
vector<int> vec2;
int n, m, p;
void f(int v, int k){
	if(v==m){
		
		vec.push_back(vec2);
		vec2.clear();
	
	}
	else{
		for(int i = k; i<=n; i++){
			vec2.push_back(i);
			//cout << a[v];
			f(v+1, i+1);
		}
	}	

}
int main(){
   // freopen("comb.in", "r", stdin);
  //  freopen("comb.out", "w", stdout);
                                                   
    
    cin >> n >> m >> p;                                                            

     
    f(0, 1);
    for(int i = 0; i<vec[p].size(); i++){
    	cout << vec[p][i] << " ";
    }
    return 0;
	}