#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle {
    protected:
    int width;
    int height;
    public: Rectangle (int h, int w) {
        width = w;
        height = h;
    };
    /* default constructor*/
    Rectangle () {
        width = 1;
        height = 1;
    }
    void set_width (int w) {
        width = w;
    }
    
    void set_height (int h) {
        height = h;
    }
    void set_input () {
        std::cin >> height >> width;
    }
    void set_output () {
        std::cout<< height<<"x"<< width <<endl;
    }
    void print_area () {
        std::cout<<"Area="<<height*width<<endl;
    }
};

int main()
{
    printf("Rectangle hacker");
    Rectangle r,s,t;
    r.set_height(3);
    r.set_width(4);
    r.print_area();

    s = Rectangle(2,5);
    s.print_area();

    t.set_input();
    t.set_output();
    t.print_area();
    return 1;
}