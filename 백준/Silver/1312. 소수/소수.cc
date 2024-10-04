#include <iostream>
using namespace std;

int A, B, N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> A >> B >> N;

	int result = 0;

	for (int i = 0; i <= N; i++) {
		result = A / B;
		A = (A % B) * 10;
	}

	cout << result;
	return 0;
}