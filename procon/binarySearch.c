#include<stdio.h>

int binarySearch(int A[], int n, int key) {
    int left = 0, right = n;
    int mid = n / 2;

    while (left < right) {
        if (A[mid] == key) {
            return 1;
        } else if (A[mid] < key) {
            left = mid + 1;
            mid = (right + left) / 2;
        } else if (A[mid] > key) {
            right = mid;
            mid = (right + left) / 2;
        }
    }
    
    return 0;
}

int main() {
    int n, A[10000+1], q, key, sum=0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &key);
        if (binarySearch(A, n, key)) sum++;
    }
    printf("%d\n", sum);

    return 0;
}

