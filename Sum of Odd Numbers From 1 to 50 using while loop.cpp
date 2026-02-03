#include<iostream>
using namespace std;
int main()
{
	int i=1,j=0;
	while(i<=50)
	{
		j+=i;
		i+=2;
	}
	cout<<" Sum of Odd Numbers From 1 to 50 : "<<j<<endl;
	return 0;
}