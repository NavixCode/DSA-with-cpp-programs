#include<iostream>
using namespace std;
int main(){
    int number,power,result=1;
    cin>>number>>power;
    for(int i=1;i<=power;i++){
        result=result*number;
        
    }
    cout<<result;
}