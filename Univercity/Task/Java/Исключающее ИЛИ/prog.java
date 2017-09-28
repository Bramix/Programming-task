import java.util.Scanner;

/**
 *
 * @author kam123ua
 */
public class Xor {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        byte x1 = cin.nextByte();
        byte x2 = cin.nextByte();
        byte res = Xor(x1, x2);
        System.out.println(res);
    }
    
    public static byte Xor(byte x1, byte x2) {
        if(x1 + x2 == 1) {
            return 1;
        } else {
            return 0;
        }
    }
}
