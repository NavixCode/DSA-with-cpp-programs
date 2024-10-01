#include<iostream>
using namespace std;
int main(){
    int num1,num2,gnum;
    int fact1=1,fact2=1,result=1;
    cin>>num1>>num2;
    num1>num2?gnum=num1:gnum=num2;
    for(int i=2;i<=gnum;i++){
        
        if (num1%i==0||num2%i==0)
        {
            if (num1 % i == 0) {
                fact1 = i;
                num1 /= i;
            } else {
                fact1 = 1;  // Reset fact1 if i doesn't divide num1
            }

            if (num2 % i == 0) {
                fact2 = i;
                num2 /= i;
            } else {
                fact2 = 1;  // Reset fact2 if i doesn't divide num2
            }

            // If fact1 and fact2 are not the same, multiply both; otherwise, multiply only one
            if (fact1 != fact2) {
                result *= fact1 * fact2;
            } else {
                result *= fact2;
            }
            
            
        }
        if (num1==1)
            {
                fact1=1;
            }
        if (num2==1)
            {
                fact2=1;
            }
    
        
       

        if (num1==1 && num2==1)
        {
            break;
        }
        

    }
    cout<<result;
}