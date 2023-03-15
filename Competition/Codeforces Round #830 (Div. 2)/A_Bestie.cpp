   /* Solution by Jack Nguyen @ $%U%$
 * The solution was created on $%M%$ / $%D%$ / $%Y%$
 * */
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
/* THE FOLLOWING CODE IS FOR DEBUGGING PURPOSES */ 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> 
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> 
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";} void _print() {cerr << "]\n";}
template <typename T, typename... V> 
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/* THE ABOVE CODE IS FOR DEBUGGING PURPOSES */ 

void solution(){
   
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
    cin >> tt;
	for(int i=0;i<tt;i++) {
        int n; cin >> n;
        int Arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> Arr[i];   
        }
        if (n == 1){
            if (Arr[0] != 1) 
            {
                cout << 1;
            } else {
                cout << 0;
            }   
        } else {
            
        }

        
		solution();
	}
	return 0;
}