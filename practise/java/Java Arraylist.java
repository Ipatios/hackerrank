import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,d,q,x,y;
        n=in.nextInt();
         ArrayList<int[]> array =new ArrayList<int[]>(n);
        for(int i=0; i<n; i++){
            d=in.nextInt();
            int[] ar= new int[d];
            for(int j=0; j<d; j++){
                ar[j]=in.nextInt();
            }
            array.add(ar);
        }
        q= in.nextInt();
        for (int i=0; i<q; i++){
            x=in.nextInt();
            y=in.nextInt();
            try {
                System.out.println(array.get(x-1)[y-1]);
            } catch (Exception e) {
                System.out.println("ERROR!");
            }
        }
        in.close();
    }
}
