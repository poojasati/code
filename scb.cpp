#include<iostream>
#include<conio.h>
#include<dos.h>
#include<cmath>
using namespace std;


int globalmaximum=0;
int maximum(int arr[],int m)
{
	long int currentminimum=10^18;
	int absoluteminimum=0;
	for(int i=1;i<=m-1;i++)
	{
		for(int j= i+1;j<=m;j++)
		{
			int absolutedifference=0;
			absolutedifference=abs(arr[j]-arr[i]);
			cout<<"X:  "<<arr[j]<<"  Y:  "<<arr[i]<<"  abs(X-Y):  "<<absolutedifference<<"\n";
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
	cout<<"CURRENT MININMUM IS....."<<currentminimum;
}
int main()
	
{
	int arr[100],m;
	cout<<"ENTER THE LENGTH OF  ARRAY TO BE MADE.........";
	cin>>m;
	cout<<"ENTER THE  INTEGER ARRAY........";
	for(int i=1;i<=m;i++)
	cin>>arr[i];
	maximum(arr,m);
	cout<<"GLOBAL MAXIMUM IS..........."<<globalmaximum<<"\n";
	cout<<"THANKS FOR USING................";
	getche();
}
	

