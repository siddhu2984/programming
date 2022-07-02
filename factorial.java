import java.util.*;

public class factorial{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int aa = sc.nextInt();
        int sum =1;
        for(int i=1;i<aa+1;i++){
            sum = sum*i;
        }
        System.out.println(sum);
    }
}