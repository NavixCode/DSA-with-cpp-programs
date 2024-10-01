#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int factorial=1;
    for(int i=num;i>=1;i--){
        factorial=factorial*i;

    }
    cout<<factorial;
}

