#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N = 0;
	int	S;

	//N 값을 입력 받음
	cin >> N;

	//동적 배열 할당
	int* A = new int[N];

	//원소를 입력 받음
	for (int i = 0; i < N; i++) cin >> A[i];

	//S 값을 입력 받음
	cin >> S;

	//현재 피봇값을 저장할 변수
	int pivot = 0;

	//Pivot 값이 배열의 크기보다 작다면 반복
	while (pivot < N && S > 0) 
	{
		//맥스 인덱스 설정
		int maxIdx = pivot;

		//만약 현재 피봇에서 S만큼 더한 거리가 배열의 크기보다 작다면, 그 횟수만큼만 반복 (예시의 경우)
		for (int i = pivot; i <= min(N - 1, pivot + S); i++) {
			//현재 피봇의 값보다 큰 값이 있다면 그 값의 인덱스를 저장
			if (A[maxIdx] < A[i]) maxIdx = i;
		}

		//가장 큰 인덱스부터 내려오면서 순차적으로 스왑하고, 반복횟수를 감소
		for (int i = maxIdx; i > pivot; i--) {
			swap(A[i], A[i - 1]);
			S--;
		}

		//정렬이 끝났다면 다음 피봇부터 재 시작
		pivot++;
	}

	for (int i = 0; i < N; i++) cout << A[i] << " ";

	return 0;
}