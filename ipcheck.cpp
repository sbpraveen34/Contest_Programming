#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
#define DELIM "."
int valid_digit(char *ip_str)
{
	//puts(ip_str);
	//cout<<strlen(ip_str)<<endl;
	while(*ip_str)
	{
		//cout<<*ip_str<<endl;
		if(*ip_str>='0' && *ip_str<='9' && *ip_str)
		++ip_str;
		else
		{
		//cout<<"entered to stop"<<endl;
		return 0;
		}
		//cout<<*ip_str<<endl;
		}  
	return 1; 
}
int isvalid_ip(char *ip_str)
{
	//puts(ip_str);
	if(ip_str==NULL)
	return 0;
	int num,dots=0;
	char *ptr;
	ptr=strtok(ip_str,DELIM);
	//puts(ptr);
	if(ptr==NULL)
	return 0;
	while(ptr!=NULL)
	{
		//cout<<valid_digit(ptr)<<endl;
		if(!valid_digit(ptr))
		return 0;
		num=atoi(ptr);
		//cout<<"num "<<num<<endl;
		if(num>=0&&num<=255)
		{
			//cout<<"this is the mistake"<<endl;
			ptr=strtok(NULL,DELIM);
			//cout<<"this is a mistake"<<endl;
			//puts(ptr);
			
			if(ptr!=NULL)
				++dots;
				}
		//cout<<dots<<endl;
		//cout<<"last ptr ";
		//puts(ptr);
		}
		if(dots!=3)
		return 0;
		
		return 1;
		
}
int main()
{
	char ip1[]="172.39.68.9";
	char ip2[]="120.45.56.78";
	char ip3[]="150.260.34.90";
	//cout<<"enter ur ip address ";
	//gets(ip2);
	
	if(isvalid_ip(ip3))
	cout<<"correct"<<endl;
	else
	cout<<"no buddy"<<endl;
	}
	
	
		
		

	
