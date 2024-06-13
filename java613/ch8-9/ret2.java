class Rect {
    private double width;
    private double height;
    private double area;
    private double getArea() {
        area = width * height;
        return area;
    }
    public Rect(double w, double h) {
        if (w < 0 ) {
            w=1;
        }
        if (h<0) {
            h=1;
        }
        width = w;
        height = h;
        area=this.getArea();
    }
    public Rect() {
        this(1, 1);
    }
    public Rect(double w) {
        this(w, 1);
    }
    void show()
    {
        System.out.printf("w:%.2f h:%.2f area:%.2f\n",this.width,this.height,this.area);
    }
    
}
public class ret2 {
    public static void main(String[] args) {
        Rect rr[]=new Rect[3];
        rr[0]=new Rect(2,3);
        rr[1]=new Rect(4);
        rr[2]=new Rect();
        for(int i=0;i<3;i++)
        {
            rr[i].show();
        }
    }
}
