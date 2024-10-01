#include <iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int index = 0;
    int count =0;

    while(arr[index]!='\0'){
        count++;
        index++;
    }

    cout<<count;
}