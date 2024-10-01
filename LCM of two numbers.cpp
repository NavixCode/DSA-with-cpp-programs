#include<iostream>
using namespace std;
int main(){
    int num1,num2,gnum;
    int result=1;
    cin>>num1>>num2;
    num1>num2?gnum=num1:gnum=num2;
    for(int i=2;i<=gnum;i++){

        while (num1%i==0||num2%i==0)
        {
            if (num1%i==0)
        {
            
            num1=num1/i;
            
        }
           if (num2%i==0)
        {
           
            num2=num2/i;
            
        }
            result*=i;

        }

        if (num1==1 && num2==1)
        {
            break;
        }
        

    }
    cout<<result;
}