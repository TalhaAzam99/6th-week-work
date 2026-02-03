#include<iostream>
using namespace std;
int main() 
{
    int num;
    do
    {
    	cout<<"Enter a Right Password: ";
        cin>>num;
        if(num==1234)
        {
        	break;
        	cout<<" Please Enter Right Password ";
		}
	}
	while(num!=1234);
	{
		cout<<"You entered Right password: "<<num<<endl;
	}
	return 0;
}