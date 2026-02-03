#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	cout<<"Enter a number to add (Enter 0 to Stop): ";
	do
	{
		cin>>i;
		sum=sum+i;
	}
	while(i!=0);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}