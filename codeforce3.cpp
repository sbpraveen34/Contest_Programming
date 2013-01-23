#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	cin.get();
	//char empty[10];
	//gets(empty);
	char ch[n];
	//cout<<"something"<<endl;
	gets(ch);
	//cout<<"something"<<endl;
	//for(int j=0;j<n;j++)
	//{
		//cout<<j<<endl;
	
		for (int i=1;i<n;i++)
		{
			//cout<<i<<endl;
			if(ch[i]==ch[i-1])
			{
				s=s+1;
				}
			}
		//}
		cout<<s;
	}
