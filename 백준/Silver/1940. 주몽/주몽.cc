#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 1, M = 1;
	int cnt = 0;
	int i= 0;
	int j = 0;

	cin >> N >> M;
	j = N - 1;

	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	while (i < j) {

		if (v[i] + v[j] < M) {
			i++;
		}
		else if (v[i] + v[j] > M) {
			j--;
		}
		else if (v[i] + v[j] == M) {
			cnt++;
			i++;
			j--;
		}
	}

	cout << cnt;



	return 0;
}