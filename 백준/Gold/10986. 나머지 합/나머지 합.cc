#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M, cnt = 0;
	cin >> N >> M;

	vector<long> v(1000001);
	long c[1001] = {};

	for (long i = 1; i <= N; i++) {
		int temp;
		cin >> temp;

		v[i] = v[i - 1] + temp;
	}

	for (long i = 1; i <= N; i++) {
		int remainder = v[i] % M;
		if (remainder == 0) cnt++;
		c[remainder]++;
	}

	for (long i = 0; i < M; i++) {
		if(c[i] > 1) cnt += c[i] * (c[i] - 1) / 2;
	}

	cout << cnt << "\n";


	return 0;
}