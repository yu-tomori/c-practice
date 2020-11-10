#include<iostream>
#include<vector>
using namespace std;
#define MAX 100005
#define NIL -1

struct Node {
    int id;
    int parent_id;
    vector<int> children;
};

Node T[MAX];
int n;

int resolveDepth(int id) {
    int depth = 0; int pid = T[id].parent_id;
    while (true) {
        if (pid == -1) {
            break;
        } else {
            pid = T[pid].parent_id;
            depth++;
        }
    }
    return depth;
}

int resolveType(int id) {
    if (T[id].parent_id == -1) {
        return 0;
    }
    if (T[id].children.size() < 1) {
        return 2;
    }
    return 1;

}

void printTree(int i) {
    // cout << "debug: i = " << i << " before node..." << endl;
    cout << "node: " << T[i].id << ": ";
    cout << "parent: " << T[i].parent_id << ", ";

    int depth = resolveDepth(T[i].id);
    cout << "depth: " << depth << ", ";

    int typeNum = resolveType(T[i].id);
    switch (typeNum) {
        case 0 : cout << "type: " << "root, "; break;
        case 1 : cout << "type: " << "internal node, "; break;
        default : cout << "type: " << "leaf, "; break;
    }

    cout << "[";
    int x = T[i].children.size();
    for (int j = 0; j < x; j++) {
        if (j != 0) cout << ", ";
        cout << T[i].children[j];
    }
    cout << "]" << endl;
    // cout << "debug: i = " << i << " after ]..." << endl;
}

int main() {
    cin >> n;
    T[0].parent_id = -1;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> T[i].id; cin >> j; // childlenの数
        for (int x = 0; x < j; x++) { // 親情報をchildrenNodeに対して挿入
            int y;
            cin >> y;
            T[y].parent_id = i;
            // Node[i]のchildren情報を挿入
            T[i].children.push_back(y);
        }

    } // 木構造がT[n]に保持された

    for (int i = 0; i < n; i++) {
        printTree(i);
    }

    return 0;
}
