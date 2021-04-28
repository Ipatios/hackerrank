import java.util.Scanner;

public class Java_Regex {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }
in.close();
    }
     

}
// |-->means or
// the extra \ on \d is meant to escape the backslash from the string
// \d--> means any number from 0-9
// ()-->means group
// [01]?\\d{1,2}-->it can be 2 digits from 0-9  but if its 3 digits it starts with ether 0 or 1 
// 2[0-4]\\d-->starts with number 2 followed by numbers from 0 up to 4 and ends with any number from 0-9
// 25[0-5]-->starts with number 25 followed by 0-5 number 
 class MyRegex{
    String numbers="([01]?\\d{1,2}|2[0-4]\\d|25[0-5])";
    String pattern=numbers + "." +  numbers + "." +  numbers + "." + numbers;
}
