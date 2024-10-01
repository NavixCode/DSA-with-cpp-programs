#include<iostream>
using namespace std;
int main(){
    int num1,num2,divisor,dividend;
    cout<<"enter your both the numbers :";
    cin>>num1>>num2;
    while(true){
        if(num1%num2==0){
            break;
        }
        divisor=num1%num2;
        dividend=num2;
        num2=divisor;
        num1=dividend;
    }
    cout<<num2;
}
