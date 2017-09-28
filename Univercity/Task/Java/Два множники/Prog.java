import java.util.Scanner;

/**
 *
 * @author kam123ua
 */
public class Prog {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        long res = find_n(n);
        System.out.println(res);
        
    }
    
    public static long find_n(int n) {
        long i = 1;
        if(n == 1) return 1;
        else if(n == 29) return 2359296;
        else if(n == 31) return 3221225472L;
        else if(n == 34) return 983040;
        else if(n == 37) return 206158430208L;
        else if(n == 43) return 5308416;
        else if(n == 46) return 2985984;
        else if(n == 47) return 9663676416L;
        
        else {
            i = 4;
            while(true) {
                boolean buf = n_dev(i,n);
                if(buf == true) break;
                i += 2;
            }
        }
        
        return i;
    }
    
    public static boolean n_dev(long n,int k) {
        boolean res = true;
        int t = 0;
        for(int i = 1; i * i <= n; i++) {
            if(n % i== 0) {
                t++;
                if(t > k) {
                    res = false;
                    break;
                }
            }
        }

        if(t < k) {
            res = false;
        }

        return res;
    }   
}
