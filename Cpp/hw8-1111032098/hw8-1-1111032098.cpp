#include <iostream>
using namespace std;
class CRectangle
{
   int width; 
   int height; 
   public:
    CRectangle(int w, int h)
    {
        width=w;
        height=h;
    }
    CRectangle()
    {
        width=10;
        height=10;
    }
    void print()
    {
        cout << width << "," << height << endl;
    }
};
int main()
{
    CRectangle r1(3,4);
    CRectangle r2;
    r1.print();
    r2.print();
    return 0;
}