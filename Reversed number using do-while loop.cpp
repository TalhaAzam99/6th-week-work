#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter a 5-digit number: ";
    cin>>num;
    if(num<10000||num>99999) 
	{
        cout<<"Invalid input. Please enter a 5-digit number."<<endl;
        return 1;
    }
    cout<<"Reversed number: ";
    do
	{
		 int digit=num%10;
        cout<<digit;
        num/=10;
    }
    while(num !=0);
    cout<<endl;
    return 0;
}