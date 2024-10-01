#include<iostream>
using namespace std;
int main(){
    int ecounter,ocounter;
    int num=1;
    while (num!=-1){
        cout<<"enter number again :";
        cin>>num;
        if (num%2==0)
        {
            ecounter=ecounter+1;
        }else{
            ocounter=ocounter+1;
        }


    }
    cout<<"even numbers"<<ecounter<<endl;
    cout<<"odd no."<<ocounter;
    
    
}