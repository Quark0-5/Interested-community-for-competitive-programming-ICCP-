import java.util.Scanner;
public class nightmareSeries {
    public static void main(String[] qknot) {
        Scanner scan = new Scanner(System.in); 
        int test = scan.nextInt();
        while(test--> 0){
            long n = scan.nextLong();
            System.out.println(n%2==0?(-(n/2)):((n/2)+1));
        }
        scan.close();
    }
}
