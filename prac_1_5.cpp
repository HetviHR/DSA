#include<iostream>
using namespace std;

int main(){
  
    int h[3][4] = {10,11,12,13,20,22,19,37,32,1,2,3};

    int k=19;

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 4; j++)
       {
           if(k == h[i][j])
           cout<<i<<","<<j;
       }
       cout<<endl;
    }
    
 return 0;
}