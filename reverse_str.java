import java.util.*;

class reverse_str{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String str2 ="";
        int num=str.length()-1;
        while(num>=0){
            str2 = str2+str.charAt(num);
            num--;
        }
        System.out.println(str2);
        if(str.equals(str2)){
            System.out.println("palindrome");
        }
        else{
            System.out.println("Nope");
        }
}
}