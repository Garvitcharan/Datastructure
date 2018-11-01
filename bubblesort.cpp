using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
	int size;
	cout<<"enter the size of the array ";
	cin>>size;
	int a[size],l,m;
	for(l=0;l<size;l++)
	{
		cin>>a[l];
	}
	for(l=0;l<size-1;l++)
	{
		for(m=0;m<size;m++)
		{
			if(a[m]>a[m+1])
			{
				swap(a[m],a[m+1]);
			}
		}
	}
	cout<<"the sorted array is ";
	for(l=0;l<size;l++)
	{
		cout<<endl<<a[l];	
	}	
}
int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
