#include<stdio.h>

int bubbleSort(int A[], int N) {
    int i, j;
    int n = 0;
    int flag = 1;
    while (flag) {
        for (i = N-1; i <= 0; i--) {
            if (A[i] < A[i - 1]) {
                int p = A[i-1];
                A[i-1] = A[i];
                A[i] = p;
                n++;
            }
        }

        for (j = 0; j < N-1; j++) {
            if (A[j] > A[j+1]) continue;
        }
        flag = 0;
    }
    return n;
}

int main() {
    int N, i, j, num;
    int A[100];

    scanf("%d", &N);
    for (j = 0; j < N; j++) {
        scanf("%d", &A[j]);
    }

    num = bubbleSort(A, N);

    for (i = 0; i < N; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d", num);
    return 0;
}
