#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   
    string str;
    cout<<"Enter the string";
    cin>>str;
    int count=0;
    int max=0;
   // length of string
   int n= str.length();


    for(int i=0;i<=n;i++)
{
    while(str[i]!=' ')
    {   count++;
        
        
    }
    if(max<count)
        {
        max=count;
        count=0;
        }
        else
        count=0;
}
    cout<<"Maximum length of the string is "<<max;
    return 0;
}