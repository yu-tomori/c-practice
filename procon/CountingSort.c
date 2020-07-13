#include<stdio.h>
#define MAX 2000000

int A[MAX], B[MAX] = {0}, C[MAX] = {0};

void countingSort(int n, int k) {
    for (int i = 0; i <= k; i++) C[i] = 0;
    for (int i = 0; i < n; i++) C[A[i]]++;
    for (int i = 1; i <= k; i++) C[i] = C[i - 1] + C[i];
    for (int i = n-1; i >= 0; i--) {
        int t = C[A[i]];
        B[t - 1] = A[i];
        for (int j = 0; j < i; j++) {
            if (A[j] == A[i]) C[A[j]]--;
            break;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > max) max = A[i];
    }

    countingSort(n, max);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", B[i]);
            continue;
        }
        printf(" %d", B[i]);
    }
    printf("\n");

    return 0;
}

