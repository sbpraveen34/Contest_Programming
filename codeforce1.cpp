#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	char r[52],a[52];
	gets(r);
	gets(a);
	int j=1;
	int k=0;
	
	for(int i=0;i<(unsigned)strlen(a);i++)
	{
		if(r[k]==a[i])
		{
			j++;
			k++;
			
		}
		}
	cout<<j;
		}	
