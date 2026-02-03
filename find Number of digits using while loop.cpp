#include <iostream>
#include<cstdlib>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count=0;
    int temp=abs(num);

    while(temp!=0) 
	{
        temp/=10;
        count++;
    }
    if(num==0)
	{
        count=1;
    }
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}
