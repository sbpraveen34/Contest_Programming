#include<iostream>
using namespace std;
int value[]={3,4,5,6,7,8,9,10,11,12};
int weigh[]={2,3,4,5,6,7,8,9,10,11};

int main()
{
	
	int w;
	cout<<"enter the weight"<<endl;
	cin>>w;
	int m[w+1];
	m[0]=0;
	cout<<"values are"<<endl;
	for(int k=0;k<10;k++)
	{
		cout<<value[k]<<" ";
	}	
	int j=0;
	for(int i=1;i<w+1;i++)
	{
		j=0;
		//cout<<j<<endl;
		while((weigh[j]<i) &&(j<10) )
		{
			//cout<<j<<endl;
			cout<<"before"<<m[i]<<endl;
		 	if(m[i-weigh[j]]+value[j]>m[i-1])
		 	{
		 		m[i]=m[i-1]+value[j];
		 	}
		 	else{
		 		m[i]=m[i-1];
		 	}
		 	j++;
		 	cout<<m[i]<<endl;
		}
	}
	cout<<endl;
	cout<<m[w];
	cout<<endl;
	return 0;
}
