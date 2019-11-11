#include <iostream>

using namespace std;

int fv();   //maga a program

void jelek(); //ismertetõ
void megad(char &jel,int &szam1,int &szam2); //declaration

int szamologep(char &jel,int &szam1,int &szam2,int &eredmeny); //a számológép fv

int main(){
    setlocale(LC_ALL,"hun");
    jelek();
    fv();
return 0;
}

int fv()
{
    char jel=0;
    int szam1=0,szam2=0;
    int eredmeny=0;
    megad(jel,szam1,szam2);
    szamologep(jel,szam1,szam2,eredmeny);
    return 0;
}

void jelek(){
    cout<<"Jelek: + - * / Q = quit/exit/kilépés, n - new/új számok"<<endl;
}

void megad(char &jel,int &szam1,int &szam2){
    cin>>szam1>>jel>>szam2;
}

int szamologep(char &jel,int &szam1,int &szam2,int &eredmeny){
    switch(jel)
    {
        case '+':
         eredmeny = szam1+szam2;
         break;

        case '-':
          eredmeny = szam1-szam2;
          break;

        case '*':
          eredmeny = szam1*szam2;
          break;

        case '/':
          eredmeny = szam1/szam2;
          break;

        case 'Q':
          break;

        default:

              cout<<"Hibas muveletijel!"<<endl;
              break;
        }

        cout<<"Eredmény: "<<eredmeny<<endl<<"Számolj többször\n";
        fv();
    return 0;
}
