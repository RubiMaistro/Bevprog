#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    string first_name;
    cout<<"Write your name.\n";
    cin>>first_name;
    cout << "Hello, " << first_name << "!\n";
    string your_name=first_name;

    cout<<"Enter the name of the person you want to write to.\n";
    cin>>first_name;
    cout<<"\t  Dear "<<first_name<<",\n\n";
    cout<<"\tHow are you?\n\tI am fine.\n\tI miss you.\n";

    string friend_name;
    cout<<"Enter the name of the friend name: ";
    cin>>friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?";

    char friend_sex=0;
    cout<<"Enter you friend sex:\n If male: f \n Or female: n\n ";
    cin>>friend_sex;

    if(friend_sex=='f'){
        cout<<"If you see"<< friend_name<<" please ask him to call me.";
    }
    if(friend_sex=='m'){
        cout<<"If you see"<< friend_name<<" please ask her to call me.";
    }

    int age=0;
    cout<<"Enter your friends age: ";
    cin>>age;
    if(age<0 || age>110){
        cout<<("you're kidding!");
    }

    if(age<12){
        cout<<"Next year you will be "<<age+1<<endl;
    }
    if(age==17){
        cout<<"Next year you will be able to vote.\n";
    }
    if(age>70){
        cout<<"I hope you are enjoying retirement.\n";
    }

    cout<<"Yours sincerely,\n\n"<<your_name;
    return 0;
}
