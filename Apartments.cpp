#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[n];
	for(int i = 0;i < n;i++)
	    cin >> a[i];
	for(int i = 0;i < m;i++)
	    cin >> b[i];
	sort(a, a+n);
	sort(b, b + n);
    int p1 = 0, p2 = 0;
    int res = 0;
    while(p1 < n && p2 < m) {
        if(abs(a[p1] - b[p2]) <= k) {
            res++;
            p1++;
            p2++;
        }
        else if(a[p1] < b[p2]) 
            p1++;
        else
            p2++;
    }
    cout << res;
	return 0;
}
