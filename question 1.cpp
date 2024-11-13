#include <stdio.h>
void printShapeB(int N) {
    for (int i = 1; i <= N; i++) {
     
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main() {
    int N = 5;
    printShapeB(N);
    return 0;
}

