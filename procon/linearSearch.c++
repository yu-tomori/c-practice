#include<iostream>
using namespace std;

int S[10000];

int linearSearch(int slen, int v) {
    for (int i = 0; i < slen; i++) {
       if (S[i] == v) {
          return 1;
       }
    }
    return 0;
} 

int main() {
    int n, q, sum = 0;
    int T[500];

    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < q; i++) {
        if (linearSearch(n, T[i])) {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}
