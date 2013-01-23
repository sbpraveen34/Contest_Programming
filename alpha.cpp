#include<iostream>
using namespace std;
int main()
{
	char ch=65;
	int k=1;
	//cout<<ch;
	for(int i=26;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
			
		}
		for(char ch=65;ch<65+k;ch++)
		{
			cout<<ch<<" ";
		}
		cout<<endl;
		k++;
	}
}
	
	
