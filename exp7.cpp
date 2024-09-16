#include<iostream>
using namespace std;
class strconcat{
    string str;
    public:
        strconcat(){
            str=" ";
        }
        strconcat(string s){
            str=s;
        }
        strconcat operator+(const strconcat obj){
           return this->str + obj.str;
        }
        void display(){
            cout<<str<<endl;
        }
};

int main(){
    strconcat str1("hello");
    strconcat str2("world");
    strconcat res= str1+ str2;
    res.display();
    return 0;
}