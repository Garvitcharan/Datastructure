using namespace std;
#include<iostream>
int main()
{
	int s,x,choice,front=-1,rear=-1,exit=1;
	cout<<"enter the size of queue";
	cin>>s;
	int q[s];
	cout<<" enter your choice ";		//choice for operation
	while(exit)
	{
	cout<<" 1. Check 2. Insertion 3.Deletion ";		//various operations
	cin>>choice;
	switch (choice)
	{
		case 1 :									
			if (front==rear==-1)
			{
				cout<<"Queue is empty";
			}
			if (rear==s-1)
			{
				cout<<"Queue is full";
			}
			cout<<" front is "<<front<<" rear is "<<rear;
	         break;
	    case 2 :
	    	if (rear==s-1)
	    	{
	    		cout<<"The queue is already full";
			}
			else
			{
			cin>>q[rear];
			rear++;}
			break;
		case 3 :
			if (rear==-1)
			{
				cout<<"The queue is already empty";
			}
			else
			{
				for(x=0;x<=rear;x++)
				{
					q[x]=q[x+1];
				}
				rear=rear-1;
			}
			break;
		default : 
		cout<<" sorry wrong choice ";
		exit=0;
		break;
	}
}
}

