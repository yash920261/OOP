 #include<iostream>
 using namespace std;
 class shape{
    protected:
        int shape_Length;
        int shape_width;
    public:
        void setLength(int l){
            shape_Length=l;
        }
        void setWidth(int w){
            shape_width=w;
        }
        virtual int perimeter()=0;
 };
 class Rectangle : public shape{
    public:
    int perimeter(){
        return 2*(shape_Length+shape_width);
    }
 };
  class square : public shape{
    public:
    int perimeter(){
        return 4*(shape_Length);
    }
    friend float circumference(square);
 };

float circumference(square s){
    return (float)2*3.14*s.shape_Length;
}


int main(){
Rectangle r;
square s;
r.setLength(40);
r.setWidth(20);
s.setLength(40);
cout<< circumference(s)<<endl;
cout<<r.perimeter()<<endl;
cout<< s.perimeter()<<endl;

}