#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
    queue<string> Q;

    Q.push("r");
    Q.push("y");
    Q.push("y");
    Q.push("b");

    cout << Q.front() << " ";
    Q.pop();

    cout << Q.front() << " ";
    Q.pop();

    cout << Q.front() << " ";
    Q.pop();

    Q.push("g");

    cout << Q.front() << " ";
    Q.pop();

    cout << Q.front() << endl;

    return 0;
}
