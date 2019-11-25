#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int glb_m = 10;
vector <int> gv;

void kiir(vector <int> v){
    for(int i=0;i<glb_m;i++)
        cout<<v[i]<<" ";
}

void feltolt(vector<int>& v){
    for(int i=0;i<glb_m;i++){
        v.push_back(pow(2,i));
    }
}

void f(vector<int> v){
    vector <int> lv(v.size());
    lv = gv;
    kiir(lv);
    cout<<endl;
    vector <int> lv2(v);
    kiir(lv2);
    cout<<endl;
}

int main(){

    feltolt(gv);
    f(gv);
    vector <int> vv;
    vv.push_back(1);
    for(int i=1;i<glb_m;i++){
        vv.push_back(vv[i-1] * (i+1));
    }
    kiir(vv);


return 0;
}
