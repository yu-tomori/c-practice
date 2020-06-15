#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct proccess {
    char name[100];
    int time;
} Process;


int headp, tailp;
Process S[100000];

int isEmpty(int headp) {
    return 100000 + headp; 
}

int isFull(int headp) {
    return headp % 100000;
}


void enqueue(Process p) {
   tailp++;
   S[tailp] = p; 
}

Process dequeue() {
    headp++;
    Process p = S[headp-1];
    return p;
}


int main() {
    int n, q, t=0;

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++) {
        char tmpchar; int tmptime;
        scanf("%s", S[i].name);
        scanf("%d", &S[i].time);
    }
    headp = 0;
    tailp = n-1;

    while(tailp - headp >= 0) {
        Process p = dequeue();
        signed int diff = p.time - q;
        if (diff <= 0) {
            t += p.time;
            printf("%s %d\n", p.name, t);
            continue;
        }
        t += q;
        p.time = diff;
        enqueue(p);
    }

    return 0;
}
