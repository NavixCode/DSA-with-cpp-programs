#include <iostream>
using namespace std;
int main(){

    char str[100];
    char rev_str[100]="hello";
    int length = 0;

    cin.getline(str,100);

    char* str_ptr=str;
    while(*str_ptr!='\0'){
        length++;
        str_ptr++;
    }

    str_ptr=str;
    cout<<*(rev_str+2);
    // char* rev_str_ptr=rev_str+length;
    // // cout<<length<<endl;
    // *rev_str_ptr='\0';
    // rev_str_ptr--;

    // while (length>0)
    // {
    //     *rev_str_ptr=*str_ptr;
    //     rev_str_ptr--;
    //     str_ptr++;
    //     length--;
        
    // }

    // cout<<"your reversed string is ";
    // cout<<rev_str;
    

    
    
    

}
    