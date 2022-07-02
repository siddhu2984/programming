import java.util.*;

class sorting{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[4];
        for(int i=0;i<4;i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0;i<4;i++){
            int m = i;
            for(int j=i;j<4;j++){
                if(arr[m]>arr[j]){
                    int temp = arr[m];
                    arr[m]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<4;i++){
            System.out.println(arr[i]);
        }
    }
}