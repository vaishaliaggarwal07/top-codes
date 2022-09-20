#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%400==0){
        cout<<"the year is leap year";
    }
    else if(n%4==0&&n%100!=0){
        cout<<"the year is leap year";
    }
    else{
        cout<<"the year is not leap year";
    }
    return 0;
}