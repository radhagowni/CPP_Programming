#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number:"<<endl;
    cin>>num;
    if (num%2==0){
      cout<< num<<" is an Even number"<<endl;
    }
    else{
        cout<<num<<" is Odd number"<<endl;
    }
}