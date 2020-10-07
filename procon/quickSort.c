#include<stdio.h>
#define MAX 100000

typedef struct Card {
    char name;
    int number;
} card;

card A[MAX];

int partition(int p, int r) {
    int i = p - 1;
    for (int j = 0; j < r; j++) {
        if (A[j].number <= A[r].number) {
            i++;
            card temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    card temp = A[++i];
    A[i] = A[r];
    A[r] = temp;
    return i;
}

void quickSort(int p, int r) {
    if (p >= r)  return;
    int q = partition(p, r);
    quickSort(p, q - 1);
    quickSort(q, r);
}

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", &A[i].name, &A[i].number);
    }

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%c %d\n", A[i].name, A[i].number);
    }
    printf("\n");

    return 0;
}

