#include <iostream>
using namespace std;
int main(){
    int n,digit=0,first_half_result=0,count=0,second_half_result=0;
    cin>>n;
    int square=n*n;
    while (square!=0)
    {
        digit=square%10;
        count+=1;
        square/=10;
        digit=0;

    }
    square=n*n;
    for (int i = 1; i<=count/2; i++)
    {
       digit=square%10;
       second_half_result=second_half_result+digit;
       square/=10;
       digit=0;
    }
    while (square!=0)
    {
       digit=square%10;
       first_half_result+=digit;
       square/=10;
    }
    if (first_half_result == second_half_result)
    {
        cout<<"yes";
    }else{
        cout<<"no";
    }
    cout<<count<<first_half_result<<second_half_result;
    
    
}
