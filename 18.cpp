#include<iostream>
#include<algorithm>
using namespace std;

int A[100];
int n, s;
int res = 99999999;
void backTrack(int i,int d, long long sum) {
	if (sum > s || d > res) {
		return;
	}
	if (i == n) {
		if(sum == s) res = min(res, d);
		return;
	}
	backTrack(i + 1, d, sum);
	backTrack(i + 1, d+1, sum +A[i]);
}

int main() {
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	backTrack(0, 0, 0);
	if (res == 99999999) cout << "-1";
	else cout << res;
}
