#include<iostream>
using namespace std;

class Rectangle{
private:
    int length, breadth;

public:
    Rectangle(){
        cout<<"Rectangle"<<endl;
    }
    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    void getArea(){
        cout<<length*breadth<<endl;;
    }
};

class Square: public Rectangle{
public:
    Square(){
        cout<<"Square"<<endl;
    }
    void setSide(int side){
        setLength(side);
        setBreadth(side);
    }

};


int main(){
    Rectangle r;
    Square s;

    r.setLength(5);
    r.setBreadth(7);
    r.getArea();

    s.setSide(6);
    s.getArea();

    s.setBreadth(4);
    s.setLength(2);
    s.getArea();


}
