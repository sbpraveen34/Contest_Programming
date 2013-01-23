#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int m,p,count=0;
	cin>>m;
	cin>>p;
	for(int i=0;i<n;i++)
	{
		if(m<=i)
		{
		cout<<i<<","<<p<<"   ";
		count++;
		}
		else
		{
		cout<<i<<","<<p<<"  ";
		count++;
		}
		}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(p<=i)
		{
			cout<<m<<","<<i<<"  ";
			count++;
			}
		else
		{
		cout<<m<<","<<i<<"  ";
		count++;
		}
	}
	cout<<endl;
	int i,j,k=0;
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
    	if(i<=m && j<=p)
    	{
    	cout<<m-i<<","<<p-j<<"  ";
    	count++;
    	}
    	else
    	{
    	k++;
    	if(m+k<n&&p+k<n)
    	{
    	cout<<m+k<<","<<p+k<<"  ";
    	count++;
    	}
    	}
    
    	
    }
    cout<<endl<<"Total number of vacant place available  "<<(n*n)-count<<endl;
	
	
}
		
			
