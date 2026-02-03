#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	cout<<"Enter a number to add (Enter 0 to Stop): ";
	while(true)
    {
    	cin>>i;
    	if(i==0)
    	{
    		break;
		}
        sum=sum+i;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}