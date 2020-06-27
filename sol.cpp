#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int n;
	cin >> n;
	for(int i=1; i<=n+n; ++i) {
		int x;
		cin >> x;
	}
	int ans=0;
	for(int i=1; i<=n; ++i) {
		ans^=i;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
