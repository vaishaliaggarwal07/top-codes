#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    if(n1>n2){
        cout<<n1<<" is greater ";
    }
    else if(n2>n1){
        cout<<n2<<" is greater ";
    }
    else{
        cout<<"numbers are equal";
    }
    return 0;
}
