#include<iostream>
using namespace std;
int main()
{
	int size,min=32455,temp,pos;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];	
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		min=arr[i];
		pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<min)
			pos=j;
			min=arr[j];
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
}
