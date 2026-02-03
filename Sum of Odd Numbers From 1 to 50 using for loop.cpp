#include<iostream>
using namespace std;
int main()
{
	int j=0;
	for(int i=1;i<=50;i+=2)
	{
		j+=i;
	}
	cout<<" Sum of Odd Numbers From 1 to 50 : "<<j<<endl;
	return 0;
}