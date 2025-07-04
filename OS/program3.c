// Implementation Of SJF(Non-Preemption) 
#include <stdio.h>
int main() {
    int n, i, j;
    int bt[20], p[20], wt = 0, tat = 0;
    float totalWT = 0, totalTAT = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                int temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt, wt + bt[i]);
        totalWT += wt;
        tat = wt + bt[i];
        totalTAT += tat;
        wt += bt[i];
    }
    printf("\nAverage Waiting Time: %.2f", totalWT / n);
    printf("\nAverage Turnaround Time: %.2f\n", totalTAT / n);
    return 0;
}