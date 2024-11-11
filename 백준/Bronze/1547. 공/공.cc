#include <stdio.h>

void exchange(int num1, int num2);// 컵을 교환하는 함수 원형을 선언하였다.

int cup[3] = {1, 2, 3};// 배열 없이 풀 수도 있지만 이해를 돕기 위해 배열로 구현했다.

int main(){
    int M = 0;// 컵의 위치를 바꾼 횟수 M
    int a = 0, b = 0;// M개의 줄에는 컵의 위치를 바꾼 방법 X와 Y
    
    scanf("%d", &M);
    
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        
        exchange(a, b);
    }
    printf("%d", cup[0]);
}

void exchange(int num1, int num2){
    int x = 0, y = 0;
    for(int i = 0; i < 3; i++){
        if(cup[i] == num1)
            x = i;
    }
    for(int i = 0; i < 3; i++){
        if(cup[i] == num2)
            y = i;
    }
    int temp = cup[x];
    cup[x] = cup[y];
    cup[y] = temp;
}
 