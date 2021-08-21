#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
int main()
{
	char a[1000],b[1000],d;
	int c,o=0,i=0;
	 std:: cout<<"ENTER THE STRING A...............";
	cin>>a;
	cout<<"ENTER THE STRING B..............";
	cin>>b;
	cout<<"ENTER VALUE OF C..........";
	cin>>c;
	if(strlen(a)==strlen(b))
	{
		for(int i=0;i<=strlen(a);i++)
		{
			if(a[i]!=b[i])
			{
			
			
			for(int l=0;l<=strlen(a);l++)
			
			{
			
				if((a[i]==b[l])&&(a[l]==b[i]))
				{d=a[l];
				a[l]=a[i];
				a[i]=d;
				o++;
			}
			}
		}
	}

				
			
			
			
			
				
	for(int k=0;k<=strlen(a);k++)
	{
			if(a[k]!=b[k])
			{
						
			a[k]=b[k];
			o++;
		}
		
}
}
		
	o=o-c;

cout<<"NUMBER OF OPERATION REQUIRED ARE............"<<o<<"       "<<a;
getche();
}
