#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int s=0;
    long long int a[n];
    for (int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    s=s+a[0]+1;
    
    for(int i=1;i<n;i++)
    {
    	if(a[i]>=a[i-1])
    	{
    		s=s+1+(a[i]-a[i-1])+1;
    		i++;
    		}
    	else
    	{
    		s=s+a[i-1]+1+a[i]+1;
    		i++;
    	}
    }
    cout<<s;
    
		
	return 0;
}
