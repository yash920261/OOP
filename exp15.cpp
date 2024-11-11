#include<iostream>
using namespace std;
class person{
    public:
        char name[30];
        void readName(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void displayName(){
            cout<<name<<endl;
        }
};
class sports:public person{
    public:
        char sport[10];
        void readSport(){
            cout<<"Enter sport: ";
            cin>>sport;
        }
        void displaySport(){
            cout<<name<<" has opted for "<<sport<<endl;
        }
};
class student:public person{
    public:
        int medals;
        void readMedals(){
            cout<<"Enter No. of Medals awarded: ";
            cin>>medals;
        }
        void displayMedals(){
            cout<<name<<" got "<<medals<<" medals"<<endl;
        }
};

int main(){
    sports s1;
    s1.readName();
    s1.readSport();
    student s2;
    s2.readName();
    s2.readMedals();
    s1.displaySport();
    s2.displayMedals();
    return 0;
}