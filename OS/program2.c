// Implementatino of FCFS 
#include <stdio.h>
int main() {
    int n, i;
    int burstTime[20], waitTime[20], turnAroundTime[20];
    float avgWaitTime = 0, avgTurnAroundTime = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time for each process:\n");
    for(i = 0; i < n; i++) {
        printf("P[%d]: ", i + 1);
        scanf("%d", &burstTime[i]);
    }
    waitTime[0] = 0;
    for(i = 1; i < n; i++) {
        waitTime[i] = waitTime[i - 1] + burstTime[i - 1];
    }
    for(i = 0; i < n; i++) {
        turnAroundTime[i] = burstTime[i] + waitTime[i];
        avgWaitTime += waitTime[i];
        avgTurnAroundTime += turnAroundTime[i];
    }
    printf("\nProcess\tBurst Time\tWaiting Time\tTurn Around Time\n");
    for(i = 0; i < n; i++) {
        printf("P[%d]\t\t%d\t\t%d\t\t%d\n", i + 1, burstTime[i], waitTime[i], turnAroundTime[i]);
    }
    printf("\nAverage Waiting Time: %.2f", avgWaitTime / n);
    printf("\nAverage Turn Around Time: %.2f\n", avgTurnAroundTime / n);
    return 0;
}
