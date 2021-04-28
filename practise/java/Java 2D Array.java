import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6]; 
        int hourGlassSum[] = new int[16];
        int pos = 0;

        //Reads data from user input and store in 6*6 Array
        for (int arr_i = 0; arr_i < 6; arr_i++) {
            for (int arr_j = 0; arr_j < 6; arr_j++) {
                arr[arr_i][arr_j] = in.nextInt();
            }
        }
        in.close();
        //Find each possible hourGlass and calculate sum of each hourGlass
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                hourGlassSum[pos] = calculateHourGlassSum(arr, i, i + 2, j, j + 2);
                pos++;
            }
        }
        System.out.println(findmax(hourGlassSum));

    }
   
    public static int calculateHourGlassSum(int arr[][], int pos1, int pos2, int pos3, int pos4) {

        int sum = 0;
         int exclRowNum = pos1 + 1;
         int exclColNum1 = pos3;
         int exclColNum2 = pos4;
        for (int arr_i = pos1; arr_i <= pos2; arr_i++) {
            for (int arr_j = pos3; arr_j <= pos4; arr_j++) {
                sum = sum + arr[arr_i][arr_j];
            }
        }
        // for hourglasses with negatives
         sum = sum - (arr[exclRowNum][exclColNum1] + arr[exclRowNum][exclColNum2]);
        return sum;
    }

  
    public static int findmax(int arr[]) {
        int max = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= max)
                max = arr[i];
        }
        return max;
    }
}
