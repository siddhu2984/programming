import java.util.*;
public class neg_sum{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n<0){
            System.out.println("Invalid input");
        }
        else{
            int sum = 0;
            for(int i=0;i<n;i++){
                sum = sum + i;
            }
            System.out.println("sum of the number "+sum);
        }
    }  
}