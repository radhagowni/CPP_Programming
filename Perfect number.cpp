//this program is to find whther given number is perfect number or not
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num; // taking input from user
    int sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if (num%2==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        cout<<num<<" is a perfect number.\n";
    }
    else
    {
        cout<<num<<" is not perfect number.";
    }
    return 0;
}
