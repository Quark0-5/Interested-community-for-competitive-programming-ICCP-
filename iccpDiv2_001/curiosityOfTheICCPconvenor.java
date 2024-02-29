import java.util.Scanner;
public class curiosityOfTheICCPconvenor {
    public static void main(String[] qknot) {
        Scanner scan = new Scanner(System.in); 
        int test = scan.nextInt();
        while(test != 0){
            int n = scan.nextInt();
            String s = scan.next(); 
            int[] data = new int[26];
            for (int i = 0; i < n; i++) {
                data[s.charAt(i) - 'a']++;
            }
            int count = 0;
            for (int i = 0; i < 26; i++) {
                count += (data[i] > 0) ? 1 : 0;
            }
            System.out.println(count);
            test--;
        }
        scan.close();
    }
}
