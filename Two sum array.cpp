#include <iostream>
using namespace std;
int main(){
    int target;
    int array[5]={2,7,11,15,1};
    cin>>target;
    bool target_found;
    size_t array_size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < array_size; i++)
    {
       int tem_no=array[0];

       for (int j = 0; j < array_size; j++)
       {
        if(array[j]+tem_no==target){
            cout<<"["<<i<<","<<j<<"]";
            target_found = true;
            break;
        }

       }

       if(target_found == true){
        break;
       }
       

    }
    if (target_found == false)
    {
        cout<<"try next time";
    }
    
    

}