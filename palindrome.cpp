#include <stdio.h>
#include <iostream>
#include <stdexcept>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
    Rectangle() {
        cout<<"default\n";
        //default is 2x1
        width = 2;
        height = 1;
    }
    Rectangle(int w,int h) {
        cout<<"overload\n";
        if(w<1 || h>=100) {
            throw std::invalid_argument("1<= width, height<=100");
        }
        width = w;
        height = h;
    }
    int Area() {
        return height*width;
    }
};
int main () {
    Rectangle r1(2,3);
    Rectangle r2;
    cout<<"R1 Area="<<r1.Area()<<endl;
    cout<<"R2 Area="<<r2.Area()<<endl;
    return 1;
}