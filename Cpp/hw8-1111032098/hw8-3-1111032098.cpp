#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
    private:
        char id;
        int width;
        int height;
    public:
        void set_member(char i, int w, int h)
        {
            id=i;
            width=w;
            height=h;
        }
        int area(void)
        {
            return width*height;
        }
        static void largest(CWin win[],int n)
        {
            int max=0;
            int index=0;
            for(int i=0; i<3; i++)
            {
                if(win[i].area()>max)
                {
                    index=i;
                    max=win[i].area();
                }
            }
            cout << "The largest window is " << win[index].id << endl;
        }
        static double average(CWin *w,int size)
        {
            int sum=0;
            for(int i=0; i<size; i++)
            {
                sum+=w[i].area();
            }
            
            return (double)sum/size;
        
        }
};
int main()
{
    CWin win[3];
    win[0].set_member('A', 60, 1);
    win[1].set_member('B', 40,1);
    win[2].set_member('C',80,1);
    
    cout<<CWin::average(win,sizeof(win)/sizeof(CWin));
    // cout<<sizeof(win)/sizeof(CWin);
}