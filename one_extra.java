// { Driver Code Starts
//Initial Template for Java


import java.io.*;
import java.util.*;

class one_extra {

    
 // } Driver Code Ends
//User function Template for Java

public static char extraChar(String s1, String s2){

    //write your code here
    int n = s1.length();
    char arr[] = new char[n];
    for(int i=0;i<n;i++){
        char c = s1.charAt(i);
        arr[i]=c;
    }
    for(int i=0;i<s2.length();i++){
        char c = s2.charAt(i);
        int m=0;
        for(int j=0;j<n;j++){
            if(c==arr[j]){
                n++;
            }
        
        }
        
        if(m==0){
            return c;
        }
    }
    return 'a';
    
    

    
}


// { Driver Code Starts.

public static void main(String[] args) throws IOException
    {
        BufferedReader read = new BufferedReader( new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while( t-- > 0) {
            String s1 = read.readLine().trim();
            String s2 = read.readLine().trim();
            System.out.println(extraChar(s1, s2));
        }
    }
}




  // } Driver Code Ends