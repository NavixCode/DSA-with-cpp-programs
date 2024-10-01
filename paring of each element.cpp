#include <iostream>
using namespace std;
int main(){
    int arr[]={20,3,2,5,4,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }

}