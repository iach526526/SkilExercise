package ch7;

public class ch7_7 {
    public static void main(String[] args) {
        int[] a1 = { 18, 32, 65, 27, 30 };
        int[] a2;
        a2 = add10(a1);
        for (int e : a2) {
            System.out.printf("%d ", e);

        }
        System.out.println();
    }

    public static int[] add10(int[] b1) {
        int[] b2 = new int[b1.length];
        for (int i = 0; i < b1.length; i++) {
            if (b1[i] >= 60) {

                b2[i] = b1[i] + 10;
            } else {
                b2[i] = b1[i] + 20;
            }
        }
        return b2;
    }
}
