#include <iostream>
using namespace std;
int main(){
    int arr[]={2,5,4,2,7,9,8,3,5};
    int largest=INT_MIN,s_largest=INT_MIN;
    int size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if (s_largest<arr[i]&arr[i]<largest)
        {
            s_largest=arr[i];
        }
        
    }

    cout<<s_largest<<" "<<largest;
}