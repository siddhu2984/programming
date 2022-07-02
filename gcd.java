import java.util.*;

public class gcd{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int aa = sc.nextInt();
        int bb = sc.nextInt();
        int n;
        if(aa>bb){
            n=bb;
        }
        else{
            n=aa;
        }
        int num=1;
        for(int i=1;i<n+1;i++){
            if(aa%i==0 && bb%i==0){
                if(i>num){
                    num=i;
                }
            }
        }
        System.out.println(num);
    }
}