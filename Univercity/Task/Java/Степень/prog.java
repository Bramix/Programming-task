import java.util.Scanner;

/**
 *
 * @author kam123ua
 */
public class Power {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        double a = cin.nextDouble();
        int n = cin.nextInt();
        double res = power(a, n);
        System.out.println(res);
    }
    
    public static double power(double a, int n) {
        double res = a;
        if(n == 0) {
            return 1;
        }
        for(int i = 1; i < n; i++) {
            res *= a;
        }
        return res;
    }
    
}
