#include<iostream>
using namespace std;
int main()
{
	int l=0;
	int cou=0;
	while(l>=0)
	{
		if(l<=100)	
		cout<<l<<"  "<<100-l<<endl;
		if(l>100)
		cout<<200-l<<"  "<<l-100<<endl;
		if(l==200)
		l=0;
		l++;
		cou++;
		if(cou>500)
		break;
	}
		
}
