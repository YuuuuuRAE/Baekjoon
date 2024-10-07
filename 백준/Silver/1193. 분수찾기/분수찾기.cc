#include <iostream>
using namespace std;

int A[3164][3164];
int X;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> X;

	int count = 0, i = 1, j = 1;

	//right 순회
	int right = true;
	
	while(true) {
		count++;

		if (count == X) break;

		if (!right) {

			if (j == 1) {
				right = true;
				i++;
			}
			else {
				i++;
				j--;
			}
			
		} 
		else if (right) {
			if (i == 1) {
				right = false;
				j++;
			}
			else {
				i--;
				j++;
			}

		}


	}

	cout << i << "/" << j;


	return 0;
}