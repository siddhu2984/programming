import java.io.*;
import java.util.*;

public class patterns{
    public static void main(String[] args){
        /*for(int i=5;i>0;i--){
            for(int j=i;j<6;j++){
                System.out.print(j);
            }
            System.out.print("\n");
        }*/
    // { Driver Code Starts
//Initial Template for Java

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            int M[][] = new int[N][N];
            String arr[] = in.readLine().trim().split("\\s+");
            for(int i = 0;i < N*N; i++)
                M[i/N][i%N] = Integer.parseInt(arr[i]);
                

            int arrr[] = new int[N];
            for(int i=0;i<N;i++){
                arrr[i]=M[0][i];
            }
            int ii=N;
            for(int i=1;i<N;i++){
                int mm=0;
                for(int j=0;j<N;j++){
                    if(M[i][j]==arrr[j]){
                        mm++;
                    }
                }
                if(mm<ii){
                    ii=mm;
                }
            }
            System.out.println(ii);
        }
    }
}// } Driver Code Ends


