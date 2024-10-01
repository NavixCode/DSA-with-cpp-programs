#include<iostream>
#include "Untitled-1.h"
using namespace std;
int main(){
    int num,onum,l_digit,rev_no=0;
    cout<<"enter a number";
    cin>>num;
    onum=num;

    while (onum!=0)
    {
        l_digit=onum%10;
        rev_no=rev_no*10+l_digit;
        onum/=10;

        
    }
    
   if (rev_no==num)
   {
    cout<<"no is palindrome";
   }
   
    
    

}