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
        static CWin compare(CWin *obj1, CWin *obj2)
        {
            if(obj1->area()>obj2->area())
            {
                return *obj1;
            }
            else
            {
                return *obj2;
            }
        }
        friend void set_member(CWin &retangle,char i, int w, int h);
        friend void set_member(CWin &retangle);
};
void set_member(CWin &retangle,char i, int w, int h)
{
    retangle.id=i;
    retangle.width=w;
    retangle.height=h;
}
void set_member(CWin &retangle)
{
    set_member(retangle,'Z',1,1);
}
int main()
{
    CWin win[3];
    set_member(win[0],'A',60,1);
    set_member(win[1],'B',40,1);
    set_member(win[2]);
    // cout<<CWin::average(win,sizeof(win)/sizeof(CWin));
    // cout<<sizeof(win)/sizeof(CWin);
    for(int i=0; i<sizeof(win)/sizeof(CWin); i++)
    {
        cout<<win[i].area()<<endl;
    }   
}