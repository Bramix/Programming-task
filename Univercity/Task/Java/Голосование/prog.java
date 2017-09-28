import java.util.Scanner;

/**
 *
 * @author kam123ua
 */
public class Election {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        byte x = cin.nextByte();
        byte y = cin.nextByte();
        byte z = cin.nextByte();
        byte res = Election(x, y, z);
        System.out.println(res);
    }
    
    public static byte Election(byte x, byte y, byte z) {
        if(x + y + z > 1) {
            return 1;
        } else {
            return 0;
        }
    }
    
}
