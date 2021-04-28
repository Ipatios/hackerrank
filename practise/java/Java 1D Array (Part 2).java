import java.util.*;
// more info on:
// https://stackoverflow.com/questions/21556993/java-in-return-statements

public class Solution {
            public static boolean canWin(int leap, int[] game,int i) {
                int j=i;
                if (i < 0 || game[i] == 1)
            return false;
        if (i + 1 >= game.length || i + leap >= game.length)
            return true;

        game[i] = 1; //flag
// until false doesnt go to the next 
// if constant false returns false
// if true returns true
        return canWin(leap, game, i + leap)
                || canWin(leap, game, i + 1)
                || canWin(leap, game, i - 1);
            }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();

            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println((canWin(leap, game,0)) ? "YES" : "NO");
        }
        scan.close();
    }
}