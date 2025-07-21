#include <iostream>
#include<cstring>
using namespace std;
int main()
{
   char s[30];
   cin>>s;
   int v_count=0,c_count=0;
   for(int i=0;i<strlen(s);i++)
   {
      if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      {
          v_count=v_count+1;
      }
      else
      {
          c_count=c_count+1;
      }
   }
   cout<<"Vowels count : "<<v_count<<endl;
    cout<<"Consonant count : "<<c_count<<endl;

    return 0;
}