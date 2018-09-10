#include<iostream>
using namespace std;
int main ()
{
 int p[10],pri[10],wt[5],at[5],bt[5],tat[5],ct[5],ttat=0,twt=0,n,i,j,temp;
 float avgwt,avgtat;
 cout<<"Enter no of processes: ";
 cin>>n;
 cout<<"Enter burst time and priority of processes: \n";
 for(i=0;i<n;i++)
 {p[i]=i+1;
  cout<<"P"<<i+1<<"\t";
  cout<<"Burst Time: ";
  cin>>bt[i];
  cout<<"\tPriority: ";
  cin>>pri[i];
 }
 for(i=0;i<n;i++)
 {for(j=0;j<n-i-1;j++)
 {
  if(pri[j]<pri[j+1])
  {temp=pri[j+1];
   pri[j+1]=pri[j];
   pri[j]=temp;
   temp=p[j+1];
   p[j+1]=p[j];
   p[j]=temp;
   temp=bt[j+1];
   bt[j+1]=bt[j];
   bt[j]=temp;
   }
 }}
 wt[0]=0;
 for(i=1;i<n;i++)
 {
  wt[i]=bt[i-1]+wt[i-1];
  }
  for(i=0;i<n;i++)
  {
  tat[i]=bt[i]+wt[i];
  }
  cout<<"Processes "<<" Burst time "<<"  Waiting time "<<"  Turn around time\n";
  for(i=0;i<n;i++)
  cout<<" P"<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
  for(i=0;i<n;i++)
  {
  twt=twt+wt[i];
  ttat=ttat+tat[i];
  }
  avgtat=(float)ttat/n;
  avgwt=(float)twt/n;
  cout<<"Average Waiting Time: "<<avgwt<<endl;
  cout<<"Average Turn-around Time: "<<avgtat;
}
