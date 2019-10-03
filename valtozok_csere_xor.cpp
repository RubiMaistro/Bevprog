#include <iostream>

using namespace std;

int main(){
    int x=0,y=0;
    cout<<"Enter two number.\n X = ";
    cin>>x;
    cout<<" Y = ";
    cin>>y;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"Exchange: \n X = "<<x<<"\n Y = "<<y<<endl;
    return 0;
}
