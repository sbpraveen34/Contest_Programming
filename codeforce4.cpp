#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	cin.get();
	char ch[n],swap;
	gets(ch);
	for(int i=0;i<t;i++)
	{
		int j=0;
		while(j<n)
		{
			if(ch[j]=='B' && ch[j+1]=='G')
			{
				swap=ch[j];
				ch[j]=ch[j+1];
				ch[j+1]=swap;
				j=j+2;
				continue;
				}
			j++;
		}
	}
	puts(ch);
}
