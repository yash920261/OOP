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
        void readsport(){
            cout<<"Enter sport name: ";
            cin>>sport;
        }
        void displaySport(){
            cout<<sport<<endl;
        }
};
class student:public sports{
    public:
        int medals;
        void readMedals(){
            cout<<"Enter No. of Medals Awarded: ";
            cin>>medals;
        }
        void displayMedals(){
            cout<<medals;
        }
};


int main(){
    student s1;
    s1.readName();
    s1.readsport();
    s1.readMedals();
    s1.displayName(); 
    s1.displaySport();
    s1.displayMedals();
}