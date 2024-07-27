#include<iostream>
using namespace std;
int main(){
    int a,b,choice;
    cout<<"enter a & b ::: ";
    cin>>a>>b;
    cout<<"enter choice (1 for + , 2 for - , 3 for x , 4 for /) :::";
    cin>>choice;
    switch(choice){
        default: cout<<"error";
        case 1: cout<<"a + b = "<<a+b;
        case 2: cout<<"a - b = "<<a-b;
                break;
        case 3: cout<<a<<" x "<<b<<" = "<<a*b;
                break;
        case 4: cout<<"a / b = "<<a/b;
                break;
    }
    return 0;
}