#include <iostream>
#include <vector>

void print_array10(ostream& os, int* a){
    for(int i=0;i<10;i++){
        os<<i<<". elem: \t"<<a[i]<<endl;
    }
}
void print_array(ostream& os, int* a, int n){
    for(int i=0;i<n;i++){
        os<<i<<". elem: \t"<<a[i]<<endl;
    }
}
void print_vector(ostream& os, vector<int> v){
    for (int i=0;i<v.size();i++)
        os<<i<<". elem: \t"<<v[i]<<endl;
}

using namespace std;

int main(){

    int * array_1 = new int[10];

        for(int i=0;i<10;i++){
            cout<<i+1<<". elem erteke:\t"<<array_1[i]<<endl;
        }

        delete[] array_1;
        cout<<"\t";

        int * array_2=new int[10];
            print_array10(cout,array_2);
            delete[] array_2;
        cout<<"\t";

        int * array_3=new int[10];
            for(int i=0;i<10;i++){
                array_3[i]=100+i;
                cout<<i<<". elem erteke:"<<array_3[i]<<endl;
            }
            delete[]array_3;
        cout<<"\t";

        int * array_4=new int[11];
            print_array(cout,array_4,11);
            delete[] array_4;
        cout<<"\t";

        int * array_5=new int[20];
            for (int i = 0; i<20; ++i){
                array_5[i] = 100 + i;
            }

            print_array(cout,array_5,20);
            delete[] array_5;
        cout<<"\t";

        vector <int> v;
            for (int i = 0; i<10; ++i){
                v.push_back(100+i);
            }

            print_vector(cout,v);
        delete[] v;


return 0;
}
