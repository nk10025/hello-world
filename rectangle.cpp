#include <stdio.h>
#include <iostream>
using namespace std;

#include <stdio.h>
#include <iostream>
#include <stdexcept>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
    /* default constructor*/
    Rectangle() {
        cout<<"default constructor 2x1\n";
        //default is 2x1
        width = 2;
        height = 1;
    }
    /* overload set w and h */
    Rectangle(int w,int h) {
        cout<<"overload\n";
        if(w<1 || h>=100) {
            throw std::invalid_argument("1<= width, height<=100");
        }
        width = w;
        height = h;
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
        std::cout<< height<<"x"<< width<<"="<<height*width<<endl;
    }
    /* Evaluate Area */
    int Area() {
        return height*width;
    }
};

/* Main */
int main()
{
    cout<<"Rectangle hackerrank problem:"<<endl;
    Rectangle r1(2,3);
    Rectangle r2;
    cout<<"R1 Area="<<r1.Area()<<endl;
    cout<<"R2 Area="<<r2.Area()<<endl;
    cout<<"set Input and Output: Enter w h"<<endl;
    r2.set_input();
    r2.set_output();
    return 1;
}