#include <iostream>
using namespace std;

int main(){
    int start,end,sum=0,i;
    cout<<"Enter starting number";
    cin>>start;
    cout<<"Enter end number";
    cin>>end;
    for(i=start;i<=end;i++){
        sum=sum+i;
    }
    cout<<"sum of n numbers is: "<<sum;
    return 0;
}