#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 	int a,b,c;
 	cout<<"enter two number with space:";
 	cin>>a >>b;
 	cout<<"enter gap between number:";
 	cin>>c;

 	if (a>b)
 	{


        for(; a>=b;a-=c)

        {
	 	cout<<a <<endl;
        }

 	}
 	else if (a<b)
 	{


        for(; a<=b;a+=c)

        {
	 	cout<<a <<endl;
        }

 	}















}

