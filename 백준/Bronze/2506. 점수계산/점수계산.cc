#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int b;
    int sum = 0, add = 1;
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &b);
        if (b == 1) {
            sum += add;
            add++;
        }
        else if (b == 0) {
            add = 1;
        }
    }
    printf("%d", sum);
}