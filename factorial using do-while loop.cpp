#include <iostream>
using namespace std;
int main()
{
	int num,i=1;
    long long factorial = 1;
    cout<<"Enter a number: ";
    cin>>num ;
    do
    {
    	factorial=factorial*i;
    	i++;
	}
    while(i<=num );
	cout<<"Factorial of "<<num<<" = "<<factorial;
    return 0;
}