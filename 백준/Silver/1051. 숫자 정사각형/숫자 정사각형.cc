#include <iostream>
#include <string>
using namespace std;

const int START_INDEX = 0;
int arr[50][50];
int N, M;
string line;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = START_INDEX; i < N; i++) {
		cin >> line;
		for (int j = START_INDEX; j < M; j++) {
			arr[i][j] = line[j] - '0';
		}
	}

	int max_length = min(N, M);
	int length;
	int a, b, c, d;
	int result = -1;

	for (length = 1; length <= max_length; length++) {
		for (int i = START_INDEX; i <= N - length; i++) {
			for (int j = START_INDEX; j <= M - length; j++) {
				a = arr[i][j];
				b = arr[i + length - 1][j];
				c = arr[i][j + length - 1];
				d = arr[i + length - 1][j + length - 1];

				if (a == b && b == c && c == d) {
					result = length;
					break;
				}
			}
		}
	}

	cout << result * result;

	return 0;
}