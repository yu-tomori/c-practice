#include<stdio.h>

/* 選択ソート */
void selectionSort(int A[], int N) {
    int i, j, m;
    int n = 0;
    for (i = 0; i < N-1; i++) {
        int minj = i;
        for (j = i; j < N; j++) {
            if (A[minj] > A[j]) {
                minj = j;
            }
        }
        int temp = A[i];
        A[i] = A[minj];
        A[minj] = temp;
        /* minj=iのままだったら、実質入れ替えてない */
        if (i != minj) n++;
    }
    
    /* ソート後の数列とスワップ回数を出力 */
    for (m = 0; m < N; m++) {
        if (m > 0) {
            printf(" ");
        }
        printf("%d", A[m]);
    }
    printf("\n");
    printf("%d", n);
    printf("\n");
}

int main() {
    int N, i, j;
    int A[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &A[i]);

    selectionSort(A, N);

    return 0;
}
