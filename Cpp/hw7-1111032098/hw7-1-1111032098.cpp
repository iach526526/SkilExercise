#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
class Window
{
    public:
        char id;
        int width;
        int height;
        string title;
        void set_title(void)
        {
            cin>>title;
        }
        void display (void)
        {
            cout<<"title: "<<title<<endl;
        }
};
int main()
{
    Window alert;
    alert.set_title();
    alert.display();
}