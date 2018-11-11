# include <iostream>
using namespace std;
int main()
{
	int n, bt[n],f,r_bt[n], wt[n], i ,t=0, tq,tat[n];
	float sum,avgwt,avgtat;
	cout<<"Enter no. of process: ";
	cin>>n;
	cout<<"Enter the time quantum: ";
	cin>>tq;
	cout<<"Enter burst time: ";
	for(i=0; i<n;i++)
	cin>>bt[i];
		for(i=0; i<n;i++)
		r_bt[i]=bt[i];
	
while(true)
{
  f=true;
	for(i=0;i<n;i++)
	{
	if(r_bt[i]>0)
	{
		f= false;
	
	 	if(r_bt[i]> tq)
	 	{
	 	
		  t=t+tq;
		  r_bt[i]= r_bt[i]- tq;
        }
	    else
	    {
		  t=t+r_bt[i];
	    
	    wt[i]=t-bt[i];
	    r_bt[i]=0;
       tat[i]=bt[i]+wt[i];

         }
	} 
}
	if(f==true)
	break;
}

cout<<"The ture around time of processes are:- \n";
for(i=0;i<n;i++)
cout<<"P"<<i+1<<" - "<<tat[i]<<"\n";

cout<<"The waiting time of processes are:- \n";
for(i=0;i<n;i++)
cout<<"P"<<i+1<<" - "<<wt[i]<<"\n";
sum=0;
  for(i=0;i<n;i++)
  sum=sum+wt[i];
  avgwt=sum/n ;

sum=0;
for(i=0;i<n;i++)
  sum=sum+tat[i];
  avgtat=sum/n;
  cout<<" \n the  average waiting time: "<<avgwt;
  cout<<" \n the  average turn around time: "<<avgtat;
  
return 0;
}
