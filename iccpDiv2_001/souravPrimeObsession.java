import java.util.Scanner;
interface QKnot{
    boolean prime(int n);
}
public class souravPrimeObsession {
    public static void main(String[] qknot) {
        QKnot x =(n)->
        {
            if(n <= 1 ||(n%2==0 && n != 2)){
                return false;
            }else if(n == 2){
                return true;
            }else{
                for(int i=3;i*i <= n;i+=2){
                    if(n%i == 0){
                        return false;
                    }
                }
            }
            return true;
        };
        Scanner scan = new Scanner(System.in); 
        int test = scan.nextInt();
        while(test--> 0){
            int n = scan.nextInt();
            boolean tag = true;
            while(n--> 0){
                if(x.prime(n) == false){
                    tag = false;
                    break;
                }
                n/=10;
            }
            System.out.println(tag?"YES":"NO");
        }
        scan.close();
    }
}
