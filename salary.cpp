#include <iostream>
using namespace std;
class employee{
    private: 
        int salary;
    public:
        void setSalary(int s){
            salary=s;
        }    
        int getSalary(){
            return salary;
        }

};

int main(){
    employee myObj;
    myObj.setSalary(50000);
    cout<<myObj.getSalary()<<endl;
    return 0;
}