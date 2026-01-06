//this is to find sum of first n natural numbers
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int num;
    cout<<"Enter n value:"<<endl; // n denotes number upto where we have find sum
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of the first "<<num<<" natural numbers is "<<sum ;
}
