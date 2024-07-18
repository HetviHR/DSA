#include<iostream>

using namespace std;

int main(){

     int a[] = {5,8,3,4,2,0,4,2,2,1};
     int max = a[0];
     for(int i=0;i<10;i++)
     {
         if(a[i]>max){
            max = a[i];
         }
     }
    cout<<"Maximum element in array is: "<<max<<endl;

    int count[max+1];

    for(int i=0;i<=max;i++){
       count[i] = 0;
        }

        for(int i=0;i<=max;i++)
        {
            for(int j=0;j<10;j++){
                    if(i == a[j])
                    count[i]++;
            }
        }

        for(int h=0;h<=max;h++){
            cout<<count[h]<<"  ";
        }
        cout<<endl;
        cout<<count[0]<<endl;
        int sum[max];

        for(int i=0;i<=max;i++){
            sum[i] = 0;
        }
        sum[0] = count[0];
        cout<<endl;
        cout<<"i'm in sum"<< count[0];
        for(int i=1;i<=max;i++){
           sum[i] = sum[i-1] + count[i] ;
        }
        for(int h=0;h<=max;h++){
            cout<<sum[h]<<"  ";
        }


    }


