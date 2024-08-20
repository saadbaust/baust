#include <iostream>
using namespace std;x

// This is non-preemtive FCFS code. This code will work if there is not idle CPU time and the inputs are sorted according to arrival_time**
// TO DO: Sort input and handle idle time

int main()
{
    int processID[10], arrival_time[10], burst_time[10], completion_time[10], turn_around_time[10], waiting_time[10], n, i, sum = 0;
    float avg_wt;
    // Enter data
    printf("enter no of proccess you want:");
    scanf("%d", &n);
    printf("Enter PID-arrival_time-burst_time");
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &processID[i], &arrival_time[i], &burst_time[i]);
    }
    // Completion time for first process
    completion_time[0] = arrival_time[0] + burst_time[0];
    // Completion time for other process
    for (i = 1; i < n; i++)
    {
        completion_time[i] = completion_time[i - 1] + burst_time[i];
    }
    // TAT and WT calculation
    for (i = 0; i < n; i++)
    {
        turn_around_time[i] = completion_time[i] - arrival_time[i];
        waiting_time[i] = turn_around_time[i] - burst_time[i];
        sum = sum + waiting_time[i];
    }
    // Print result
    printf("\nPID\t A.T\t B.T\t C.T\t TAT\t W.T");
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t %d\t %d\t %d \t %d \t %d", processID[i], arrival_time[i], burst_time[i], completion_time[i], turn_around_time[i], waiting_time[i]);
    }

    avg_wt = sum / n;

    printf("\nAverage Waiting Time: %.3f", avg_wt);

    return 0;
}