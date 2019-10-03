#include <iostream>

using namespace std;

int main(){
    int number=1, i=1;
    while(number>0){
        number<<=1;
        i++;
    }
    cout<<"Steps: "<<i<<"\n";
return 0;
}
