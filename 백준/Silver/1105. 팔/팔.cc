#include <iostream>
using namespace std;

string L, R;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int min = 0;

	cin >> L >> R;

	if (L.size() != R.size()) {
		cout << 0;
	}

	else {
		for (int i = 0; i < L.size(); i++) {
			if (L[i] != R[i]) {
				break;
			}

			if (L[i] == R[i] && L[i] == '8') {
				min++;
			}
		}

		cout << min;
	}

	return 0;
}