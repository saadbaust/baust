#include <iostream>
using namespace std;

int main()
{
    int pid[] = {1, 2, 3, 4, 5};
    int n = sizeof(pid) / sizeof(pid[0]);

    int bt[] = {5, 3, 1, 2, 3};
    int quantum = 2;

    int rem_bt[n];
    int wt[n];
    int tat[n];
    int ct[n];

    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int time = 0;
    int pending_count = n;

    while (pending_count > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                if (rem_bt[i] > quantum)
                {
                    time += quantum;
                    rem_bt[i] -= quantum;
                }
                else
                {
                    time += rem_bt[i];
                    rem_bt[i] = 0;
                    ct[i] = time;
                    pending_count--;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        wt[i] = time - bt[i];
        tat[i] = bt[i] + wt[i];
    }
    cout << "PID\tBT\tWT\tTAT\tCT\n";
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++)
    {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << pid[i] << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << "\t" << ct[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / n << endl;
    cout << "Average turnaround time = " << (float)total_tat / n << endl;

    return 0;
}
