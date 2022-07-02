import java.util.*;

public class count_digits{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int ss = sc.nextInt();
        int d = 1;
        while(ss>9){
            ss = ss/10;
            d++;
        }
        System.out.println(d);
    }
}