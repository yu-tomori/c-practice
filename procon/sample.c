#include<stdio.h>

int main() {
    int x, n;
    int A[n];

    scanf("%d %d", &x, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 6; i++) {
        int a = x - i;
        int b = x + i;
        for (int j = 0; j < n; j++) {
            if (a == A[j]) goto loopend;
        }

        printf("%d", a);

        for (int j = 0; j < n; j++) {
            if (b == A[j]) goto loopend;
        }

        printf("%d", b);
        loopend:
 

        continue;
    }

    return 0;
        

}
