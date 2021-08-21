#include<iostream>
#include<conio.h>
#include<dos.h>
#include<cmath>
using namespace std;


int globalmaximum=0;
int maximum(int arr[],int m,int n)
{
	long int currentminimum=10^18;
	int absoluteminimum=0;
	for(int k=1;k<=n;k++)
	{int arri[m];
	cout<<"THE ARRAY IS AS FOLLOWED";

	for(int l=k;l<k+m;l++)
	{
	arri[l]=arr[l];

cout<<arri[l]<<"  ";
}
	for(int i=1;i<=m-1;i++)
	{
		for(int j= i+1;j<=m;j++)
		{
			int absolutedifference=0;
			absolutedifference=abs(arri[j]-arri[i]);
			cout<<"X:  "<<arri[j]<<"  Y:  "<<arri[i]<<"  abs(X-Y):  "<<absolutedifference<<"\n";
			if(absolutedifference<currentminimum)
			{
			
			currentminimum=absolutedifference;
			
			}
			 if(absolutedifference>globalmaximum)
			{
			globalmaximum=absolutedifference;
		}
		}
	}
}
	cout<<"CURRENT MININMUM IS....."<<currentminimum<<"\n";
}
int main()
	
{
	int arr[100],n,m;
	cout<<"ENTER THE LENGTH OF  ARRAY TO BE MADE.........";
	cin>>n;
	cout<<"ENTER THE  INTEGER ARRAY........";
	for(int i=1;i<=n;i++)
	cin>>arr[i];
	cout<<"ENTER THE LENGTH OF SUBSEQUENCE ARRAY........";
	cin>>m;
	maximum(arr,m,n);
	cout<<"GLOBAL MAXIMUM IS..........."<<globalmaximum<<"\n";
	cout<<"THANKS FOR USING................";
	getche();
}
