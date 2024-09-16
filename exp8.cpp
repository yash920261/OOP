#include<iostream>
using namespace std;
class circle{
    public:
        int radius;
        circle(int r){
            radius=r;
        }
        void area(){
            cout<<"Area of Circle is "<<2*3.14*radius<<endl;
        }
        circle operator++(int){
            radius++;
            return radius;
        }
};

int main(){
    circle c(15);
    c.area();
    c++;
    c.area();
    c++;
    c.area();
    return 0;
}