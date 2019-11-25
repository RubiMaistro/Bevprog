#include <iostream>

using namespace std;

const int m=10;
int ga[m]={1,2,4,8,16,32,64,128,256,512};

void f(int as[], int n){
    int la[m];
    for(int i=0;i<m;++i){
        la[i] = ga[i];
        cout << la[i]<<" ";
    }
    cout<<endl;
    int* p = new int{n};
    for(int i=0;i<m;++i){
        p[i] = as[i];
        cout << p[i]<<" ";
    }
    cout<<"\n";
    delete[] p;
}



int main(){

    const int loc_m=10;
    f(ga,m);
    int aa[loc_m]={1};

    for(int i=1;i<=loc_m;i++){
        aa[i] = aa[i-1] * (i+1);
    }

    /*for(int i=0;i<loc_m;i++){
        cout<<aa[i]<<" ";
    }*/
    f(aa,loc_m);

return 0;
}
