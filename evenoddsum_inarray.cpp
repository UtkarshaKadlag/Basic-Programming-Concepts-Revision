#include<iostream>
using namespace std;
int main(void)
{
	int size;
	
	cout<<"\n Enter the size of array : "<<endl;
	cin>>size;
	
	int A[size], i, even=0, odd=0;
	
	for(i=0;i<size;i++)
	{
		cout<<"\n Enter A["<<i<<"] : "<<endl;
		cin>>A[i];
		
	}
	for(i=0;i<size;i++)
	{
		cout<<"\n A["<<i<<"] = "<<*(A+i);
	}
	for(i=0;i<size;i++)
	{
		if(*(A+i)%2==0)
		{
			even+=*(A+i);
		}
	}
	for(i=0;i<size;i++)
	{
		if(*(A+i)%2!=0)
		{
			odd+=*(A+i);
		}
	}
	
	cout<<"\n Sum of all even numbers in araay is : "<<even<<endl;
	cout<<"\n Sum of all odd numbers in araay is : "<<odd<<endl;
	
	return 0;
}
