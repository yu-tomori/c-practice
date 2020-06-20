#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int numOfStack(vector<int> A, int p, int n) {
    vector<int>::iterator it;
    it = A.begin();

    for (int i = 0; i < n; i++ ) {
        int x = 0;
        while (1) {
            x += *it;
            if (x < p) {
                if (it == A.end()) return 1;
                it++;
                continue;
            } else {
                it++;
                break;
            }
        }
    }

    return 0;
}

int main() {
    int n, track, max = 0;
    vector<int> A;
    vector<int>::iterator it = A.begin();

    scanf("%d %d", &n, &track);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back(x);
        if (x > max) max = x;
    }

    for (int i = max;; i++) {
        int flag = numOfStack(A, i, track);
        if (flag) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

    


        



