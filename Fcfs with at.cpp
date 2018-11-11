#include<iostream>
using namespace std;
int main()
{int n,at[10],bt[10],ct[10],tat[10],wt[10],i,j,temp=0;
wt[0]=0;
cout<<"Enter no. of processes: ";
cin>>n;
cout<<"Enter arrival time and burst time of processes: ";
for(i=0;i<n;i++)
{cout<<"P"<<i+1<<": ";
cin>>at[i];
cin>>bt[i];
}
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
{if(at[j]>at[j+1])
{temp=at[j+1];
at[j+1]=at[j];
at[j]=temp;
temp=bt[j+1];
bt[j+1]=bt[j];
bt[j]=temp;
}}
}
for(i=0;i<n;i++)
{wt[i]=bt[i-1]+wt[i-1];
tat[i]=bt[i]+wt[i];
}
cout<<"AT"<<"\t"<<"BT"<<"\t"<<"WT"<<"\t"<<"TAT"<<endl;
for(i=0;i<n;i++)
{
cout<<at[i]<<"\t"<<bt[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
}
float avgwt,avgtat,awt=0,atat=0;
for(i=0;i<n;i++)
{awt=awt+wt[i];
atat=atat+tat[i];
}
avgwt=(float)awt/n;
avgtat=(float)atat/n;
cout<<"Average waiting time: "<<avgwt<<endl;
cout<<"Average turn around time: "<<avgtat;
}
