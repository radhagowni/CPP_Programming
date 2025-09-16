// this program is to print every character in a string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter String:"<<endl;
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    {
        cout<<str[i]<<endl;
    }

}
