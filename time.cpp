#include<iostream>
#include<ctime>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
	time_t seconds;
	tm * timeinf;
	time(&seconds);
	timeinf=localtime(&seconds);
//	seconds=time(NULL);
	char *ch;
	ch=asctime(timeinf);
	cout<<asctime(timeinf)<<"hours";
	puts(ch);
	
	return 0;
}

