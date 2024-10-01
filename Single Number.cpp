#include <iostream>
using namespace std;
int main(){
    int arr[]={2,2,3,6,3,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<size;i++)
    {
        int count = 0 ;
        for (int j = 0; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
               count++;
            }
            
        }
        
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}