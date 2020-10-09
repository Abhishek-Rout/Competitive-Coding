
import java.util.*;


class Codechef {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();               
        for(int h=0; h<t; h++){ 
            int n = sc.nextInt();
            int ar[]=new int[n];            
            for(int i=0; i<n; i++){
                ar[i] = sc.nextInt();
            }
            long sum=0;
            for(int i=1; i<n; i++){
                sum = sum + ( Math.abs(ar[i] - ar[i-1]) -1);               
            }
            System.out.println(sum);
        }
    }
}
