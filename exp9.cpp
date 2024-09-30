#include<iostream>
using namespace std;
class number{
    int m,n;
    public:
        number(){
            m=10;
            n=10;
        }
        number(int a, int b){
            m=a;
            n=b;
        }
        number(number &obj){
            m=obj.m;
            n=obj.n;
        }
        void display(){
            cout<<m<<"\n"<<n<<endl;
        }
};
int main(){
    number a;
    a.display();
    number b(20,40);
    b.display();
    number c=b;
    c.display();
    return 0;
}