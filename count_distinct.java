import java.util.*;

public class count_distinct{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        int m = 0;
        int arr3[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int nn = arr[i];
            int ss = 0;
            for(int j=0;j<m;j++){
                if(arr[i]==arr3[j]){
                    ss++;
                }
            }
            if(ss==0){
                arr3[m]=arr[i];
                m++;
            }
        }
        System.out.println(m);
        /*for(int i=0;i<m;i++){
            System.out.println(arr3[i]);
        }*/
    }
}