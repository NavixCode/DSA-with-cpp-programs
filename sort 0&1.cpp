#include <iostream>
using namespace std;
int main(){
    int arr[]={1,0,0,1,0,1,1};
    int size= 7;
    int count=0;
    for(int i=0;i<size;i++){
        
        if(arr[i]==0){
            count++;
        }

    }
    for (int i = 0; i < size; i++)
    {
        if(i<count){
            arr[i]=0;


        }else{
            arr[i]=1;
        }

        cout<<arr[i]<<" ";



    }
   
    
    

}