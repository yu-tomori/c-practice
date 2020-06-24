#include<iostream>
using namespace std;
#define MAX 500000
#define SENTINEL 1000000000

int L[MAX / 2];
int R[MAX / 2 + 1];
int cnt = 0; // カウント

void merge(int A[], int left, int right) {
    int mid = (right + left) / 2;
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = SENTINEL; R[n2] = SENTINEL;

    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] < R[j]) A[k] = L[i++];
        else A[k] = R[j++]; 
        cnt++;
    }
}

void mergeSort(int A[], int left, int right) {
    if (left + 1 >= right) return;
    int mid = (left + right) / 2;
    mergeSort(A, left, mid); mergeSort(A, mid, right);
    merge(A, left, right);
}

int main() {
    int n;
    int A[MAX];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    mergeSort(A, 0, n);

    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << cnt << endl;
    
    return 0;
}

    
