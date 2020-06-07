#include<iostream>
using namespace std;

int bubbleSort(char A[], int N) {
    int sw = 0;
    bool flag = 1;
    for (int i = 0; flag; i++) {
        flag = 0;
        for (int j = N-1; j >= i+1; j--) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
                flag = 1;
                sw++;
            } 
        }
    }
    return sw;
}

int selectionSort(char A[], int N) {
    int sw = 0;
    int i, j ,minj;
    for (i = 0; i < N-1; i++) {
        minj = i;
        for (j = i+1; j < N; j++) {
            if (A[minj] > A[j]) {
               minj = j; 
            }
        }
        swap(A[i], A[minj]);
        if (i != minj) sw++;
    }
    return sw;
}

int main() {
    int N, bsw, ssw;
    char A[100], B[100];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = A[i];
    }

    bsw = bubbleSort(A, N);
    ssw = selectionSort(B, N);

    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << "Stable" << endl;

    /* stableかどうか */
    bool stable = true;

    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << B[i];

        if (A[i] != B[i]) {
            stable = false;
        } 
    }
    cout << endl;

    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    
    return 0;
}
