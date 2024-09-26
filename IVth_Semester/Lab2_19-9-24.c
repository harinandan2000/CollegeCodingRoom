// Name-Harinandan Paswan
// reg No- 22105128034
// Date- 19-09-24
// Operating System
/*AIM:-  First Come First Serve CPU Scheduling Algorithms
 */
#include <stdio.h>
int main()
{
    int bt[20], wt[20], tat[20], i, n;
    float wtavg = 0, tatavg = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter burst time for process p%d: ", i);
        scanf("%d", &bt[i]);
    }
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }
    for (i = 0; i < n; i++)
    {
        wtavg += wt[i];
        tatavg += tat[i];
    }
    printf("PROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]);
    }
    wtavg /= n;
    tatavg /= n;
    printf("Average Waiting Time: %f\n", wtavg);
    printf("Average Turnaround Time: %f\n", tatavg);
    return 0;
}