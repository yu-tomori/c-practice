#include<stdio.h>
#define MAX 100000

int partition(int A[], int p, int r) {
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= A[r]) {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } else {
            continue;
        }
    }

    int x = A[r];
    for (int m = r; m >= i + 2; m--) {
        A[m] = A[m-1];
    }
    A[i + 1] = x;
    
    return i + 1;
}

int main() {
    int n, A[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int q = partition(A, 0, n-1);

    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        if (i == q) {
            printf("[%d]", A[i]);
        } else {
            printf("%d", A[i]);
        }
    }
    printf("\n");

    return 0;
}

         
            


