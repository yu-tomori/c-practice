#include<iostream>
#include<algorithm>
using namespace std;

int bubbleSort(int A[], int n) {
    int count;
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= i+1; j--) {
            if (A[j-1] > A[j]) {                                                                    
                swap(A[j-1], A[j]);
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    int *A;

    cin >> n;
    A = (int *)malloc(sizeof(int) * n + 1);
    for (int i = 0; i < n; i++) cin >> A[i];
    int inversion_count = bubbleSort(A, n);
    
    cout << inversion_count << endl;

    return 0;
}
