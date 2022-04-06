#include<stdio.h>
#include<stdlib.h>

//it is like REF=30 but gloabally 
#define REF 30
int main()
{
    int i,j,n,p[REF],bt[REF],wt[REF],tat[REF],t=0;
    float avgtat=0, avgwt=0;
    printf("\nEnter number of processes to be executed: ");
    scanf("%d",&n);//taking no. of process to perfornm
    printf("\nEnter the burst time for respective processes:\n");

    //taking burst time of process
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        scanf("%d",&bt[i]);
    }


//bubble sort algorithm
//sorting burst time acc to ascending order

//yaha pe process ko burst time ke according sort kiya hai using 'bubble sort' 
    for(i=0;i<n-1;i++)
    {  
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
                    }
        }
    }

    // printing tabs respectively
    printf("\nProcess\t Burst time \t Turn around time \t Waiting time");
    for(i=0;i<n;i++)
    {  
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];//calculating turn around time by formula tat = wt - bt (of particular process(i)) 
        avgtat+=tat[i];//average matlab normal wala avgerage hi hai i.e tat // no. of process(here n  )
       avgwt+=wt[i];
        printf("\nP%d\t   %d\t               %d\t                 %d\t ",p[i],bt[i],tat[i],wt[i]);
    }
   
   printf("\nAverage Turn around time is = %.2f",avgtat/n);
   printf("\nAverage Waiting time is = %.2f",avgwt/n);
   return 0;

}