#include<iostream>
using namespace std;



int main(){

        int a[] = {5,8,3,4,2,0,4,2,2,1};
        int max = a[0];
        cout<<"original array is: ";

        for(int h=0;h<10;h++){
            cout<<a[h]<<"  ";
        }
        cout<<"\n";
        for(int i=0;i<10;i++)
        {
            if(a[i]>max){
            max = a[i];
            }
        }
    cout<<"Maximum element in array is: "<<max<<endl;

        //initialize with zero
    int count[max+1];

    for(int i=0;i<=max;i++){
        count[i] = 0;
        }

        //frequency
        
            for(int i=0;i<10;i++){
                    count[a[i]]++;
            }
        

        for(int h=0;h<=max;h++){
            cout<<count[h]<<"  ";
        }
        cout<<endl;
        int sum[max];

        for(int i=0;i<=max;i++){
            sum[i] = 0;
        }
        sum[0] = count[0];
        cout<<endl;

        for(int i=1;i<=max;i++){
            sum[i] = sum[i-1] + count[i] ;
        }
        //print sum
        for(int h=0;h<=max;h++){
            cout<<sum[h]<<"  ";
        }

    //new output arrY
    int output[10];
    for (int i = 0; i < 10; i++)
    {
        output[sum[a[i]]-1]=a[i];
        sum[a[i]]--;
    }
cout<<endl;
    //print output
    for(int h=0;h<10;h++){
        
            cout<<output[h]<<"  ";
        }
    

    }


