//this is to find the given number is positive or negative or zero
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:"<<endl;
    cin>>num;
    if (num==0){
        cout<< num<<" is zero"<<endl;
    }
    else if (num>0)
    {
       cout<<num<<" is a positive number\n";
    }
    else
    {
        cout<<num<<" is a negative number";
    }
}
