import java.util.*;

public class largest_3{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int q = sc.nextInt();
        if(m>n && m>q){
            System.out.println(m+" is largest");
        }
        else if(n>m && n>q){
            System.out.println(n+" is largest");
        }
        else{
            System.out.println(q+" is largest");
        }
    }
}