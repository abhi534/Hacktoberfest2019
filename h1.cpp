#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>1;j--)
		{
			if(j>=i)
			cout<<j;
			else
			cout<<i;
		}
		for(;j<=5;j++)
		{
			if(j>=i)
			cout<<j;
			else
			cout<<i;
		}
	cout<<endl;
	}

	for(i=2;i<=5;i++)
	{
		for(j=5;j>1;j--)
		{
			if(j>=i)
			cout<<j;
			else
			cout<<i;
		}
		for(;j<=5;j++)
		{
			if(j>=i)
			cout<<j;
			else
			cout<<i;
		}
	cout<<endl;
	}
getch();
}
