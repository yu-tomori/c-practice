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
   if (tailp == 100000)
       tailp = isFull(tailp);
   S[tailp] = p; 
}

Process dequeue() {
    headp++;
    if (headp == 100000)
        headp = isFull(headp);
        Process pro = S[isEmpty(headp-1)];
        return pro; 
    Process p = S[headp-1];
    return p;
}


int main() {
    int n, q, t=0;

    scanf("%d %d", &n, &q);
    printf("\ninput... n:%d q:%d\n", n, q);

    for (int i = 0; i < n; i++) {
        char tmpchar; int tmptime;
        scanf("%s", S[i].name);
        scanf("%d", &S[i].time);
        printf("input... S[%d].name:%s, .time:%d\n", i, S[i].name, S[i].time);
    }
    headp = 0;
    tailp = n-1;

    while(headp != tailp) {
        Process p = dequeue();
        printf("%s dequeued...\n", p.name);
        signed int diff = p.time - q;
        printf("%s processed... time diff: %d\n", p.name, diff);
        if (diff <= 0)
            t += p.time;
            printf("%s %d\n", p.name, t);
            continue;
        t += q;
        enqueue(p);
    }

    return 0;
}
