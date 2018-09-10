#include<iostream>
using namespace std;
int main ()
{
 int wt[10],bt[10],tat[10],p[10],ttat=0,twt=0,n,i;
 float avgwt,avgtat;
 wt[0]=0;
 cout<<"Enter no of processes=";
 cin>>n;
 cout<<"Enter burst time of processes=";
 for(i=0;i<n;i++)
 cin>>bt[i];
 for(i=0;i<n;i++)
 {wt[i]=bt[i-1]+wt[i-1];
  tat[i]=bt[i]+wt[i]; 
 }
  cout<<"Processes "<<" Burst time "<<"  Waiting time "<<"  Turn around time\n";
  for(i=0;i<n;i++)
  cout<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
  
  for(i=0;i<n;i++)
  {
  twt=twt+wt[i];
  ttat=ttat+tat[i];
  }
  avgtat=(float)ttat/n;
  avgwt=(float)twt/n;
  cout<<"Average Waiting Time="<<avgwt<<endl;
  cout<<"Average Turn-around Time="<<avgtat;
}
