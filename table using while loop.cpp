#include<iostream>
using namespace std;
int main()
{
	int i,j=1;
	cout<<" Enter a NUmber : ";
	cin>>i;
	while(j<=10)
	{
		cout<<i<<"X"<<j<<"="<<i*j<<endl;
		j++;
	}
	return 0;
}
