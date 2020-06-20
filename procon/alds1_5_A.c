#include<stdio.h>

int n, A[50];

// 入力値のMから選んだ要素を引いていく再帰関数
int solve(int i, int m) {
    if (m == 0) return 1;
    if (n <= i) return 0;

    if (solve(i+1, m) || solve(i+1, m-A[i])) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int v;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &v);
    for (int i = 0; i < v; i++) {
        int x;
        scanf("%d", &x);
        if (solve(0, x)) {
            printf("%s\n", "yes");
        } else {
            printf("%s\n", "no");
        }
    }

    return 0;
}

