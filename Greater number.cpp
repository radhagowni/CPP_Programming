// this program is to find the greater number among the given two numbers
#inlcude<iostream> //including all the needed libraries
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1; // cin is a function used to take input from user
    cin>>num2;
    if (num1>num2)
    {
        cout<<num1 <<" is greater ."<<endl;
    }
    else{
        cout<<num2<<" is greater .";
    }

}
