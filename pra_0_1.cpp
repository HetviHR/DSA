#include<iostream>
using namespace std;
void printpairs(int num[],int n,int k)
{

}
bool pair_fun(int num[],int n,int k)
{
    if(n%2==1)
    {
        cout<<"-1";
        exit;
    }
    static int count;
    int vis[n];
    for(int k=0;k<n;k++)
    {
        vis[k]=-1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((num[i]+num[j])%k==0 and vis[i]==-1 and vis[j]==-1)
            {
                count++;
                vis[i]=1;
                vis[j]=1;

            }
        }
    }
    if(count!=n/2)
    {
        cout<<"-1";
    }
    else{
        printpairs(num,n,k);
    }

}

int main()
{
   int arr[10];
   int i,n;
   cout<<"Enter the number of elements you want to insert in the array";
   cin>>n;
   cout<<"Enter the elements of array"<<endl;
   for(i=0;i<=n;i++)
   {
     cin>>arr[i];
   } 
   int k;
   cout<<"Enter the positive integer K";
   cin>>k;
   
   pair_fun(arr,n,k);
   return 0;
}