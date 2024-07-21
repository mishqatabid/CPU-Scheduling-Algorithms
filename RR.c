#include<stdio.h>
#include<stdlib.h>

struct rr {
    int pno, btime, sbtime, wtime, lst;
} p[10];

int main() {
    int pp = -1, ts, flag, count, ptm = 0, i, n, twt = 0, totttime = 0;

    printf("enter no of processes:");
    scanf("%d", &n);
    printf("enter the time slice:");
    scanf("%d",&ts);
    printf("enter the burst time");

    for (i = 0; i < n; i++) {
        printf("\n process%d\t", i + 1);
        scanf("%d", &p[i].btime);

        p[i].wtime = p[i].lst = 0;
        p[i].pno = i + 1;
        p[i].sbtime =p[i].btime;
    }

    printf("scheduling....\n");
    do{
        flag = 0;
        for (i = 0; i < n; i++) {
            count = p[i].btime;
            if (count > 0) {
                flag = -1;
                count = (count >= ts) ? ts : count;
                ptm += count;
                p[i].btime -= count;

                if (pp != i) {
                    pp = i; p[i].wtime += ptm - p[i].lst - count;
                    p[i].lst = ptm;
                }
            }
        }
    } while (flag != -1);

    printf("\n\n process\tburst time\twait time\tturnaround time");

    for (i = 0; i < n; i++) {
        printf("\n%d\t\t%d\t\t%d\t\t%d", p[i].pno, p[i].sbtime, p[i].wtime, p[i].sbtime + p[i].wtime);
        twt += p[i].wtime; totttime += p[i].sbtime + p[i].wtime;
    }

    printf("\n\n the total waiting time is %d", twt);
    printf("\n\n the average waiting time is %f", (float)twt / n);
    printf("\n\n the total turnaround time is %d", totttime);
    printf("\n\n the average turnaround time is %f", (float)totttime / n);

    return 0;
}
