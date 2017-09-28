import java.util.Scanner;
 
/**
 *
 * @author kam123ua
 */
public class Main {
 
    public static long result(int n, int k){
       if(k == 0 || n == k){
           return 1;
       }
       return result(n - 1, k) + result(n - 1, k - 1);
    }
   
    public static void main(String[] args) {
        int n, k;
        long res;
        Scanner cin = new Scanner(System.in);
       
        n = cin.nextInt();
        k = cin.nextInt();
        res = result(n, k);
       
        System.out.println(res);
       
    }
 
}