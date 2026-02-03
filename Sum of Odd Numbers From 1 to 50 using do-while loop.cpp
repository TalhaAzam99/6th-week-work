#include<iostream>
using namespace std;
int main()
{
	int i=1,j=0;
	do
	{
		j+=i;
		i+=2;	
	}
	while(i<=50);
	cout<<" Sum of Odd Numbers From 1 to 50 : "<<j<<endl;
	return 0;
}