class Rectangle {
    private double width;
    private double height;
    private double area;
    private double getArea() {
        area = width * height;
        return area;
    }
    void setParameter(double w, double h) {
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
    void setParameter() {
        this.setParameter(1, 1);
    }
    void setParameter(double w) {
        this.setParameter(w, 1);
    }
    void show()
    {
        System.out.printf("w:%.2f h:%.2f area:%.2f\n",this.width,this.height,this.area);
    }
    
}
public class ret {
    public static void main(String[] args) {
        Rectangle rr[]=new Rectangle[3];
        for(int i=0;i<3;i++)
        {
            rr[i]=new Rectangle();
        }
        rr[0].setParameter(2,3);
        rr[1].setParameter(4);
        rr[2].setParameter();
        for(int i=0;i<3;i++)
        {
            rr[i].show();
        }
    }
}
