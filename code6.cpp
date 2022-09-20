#include <iostream>
using namespace std;

int main(){
    int num,i=2;
    cout<<"enter the number to be checked";
    cin>>num;

    while(i<num){
        if(num%i==0){
            cout<<"this number is not a prime number";
            return 0;
        }
        i++;
    }
    cout<<"this number is a prime number";
    return 0;
}