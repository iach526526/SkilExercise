#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
class CBox {
    public:
        double length;
        double width;
        double height;
        double volume(void)
        {
            return length*width*height;
        }
        double surface_area(void)
        {
            return 2*(length*width+width*height+height*length);
        }
};
int main()
{
    CBox box1;
    box1.length=5;
    box1.width=6;
    box1.height=7;
    cout<<"Volume: "<<box1.volume()<<endl;
    cout<<"Surface Area: "<<box1.surface_area()<<endl;
    return 0;
}