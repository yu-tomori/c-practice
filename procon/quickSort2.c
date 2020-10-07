#include<stdio.h>
#define MAX 100000

typedef struct Card {
    char c;
    int i;
} card;

card A[MAX];

int partition(int p, int r) {
    if (p >= r) return p;

    int i, j, x, temp;
    x = A[r].i;
    i = p - 1;
    for (j = p; j < r; j++) {
        if (A[j].i < x) {
            i++;
            temp = A[j].i; A[j].i = A[i].i; A[i].i = temp;
        }
    }
    temp = A[++i].i; A[i].i = A[r].i; A[r].i = temp;
    return i;
}

void quickSort(int p, int r) {
    int q = partition(p, r);
    quickSort(p, q - 1);
    quickSort(q, r);
}

int main() {
    int n, v;
    char S[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", S, &v);
        A[i].c = S[0]; A[i].i = v;
    } 

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%c %d\n", A[i].c, A[i].i);
    }

    return 0;
}
