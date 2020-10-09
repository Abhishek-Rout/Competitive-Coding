
import java.util.*;


class Codechef {
    public static int sumOfDigits(int x){
        int sum=0;
        int n=x;
        while(n!=0){
            sum=sum+n%10;
            n=n/10;
        }               
        return sum;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();               
        for(int h=0; h<t; h++){ 
            int n = sc.nextInt();
            int ca=0, mb=0;
            for(int i=0; i<n; i++){                
                int a=sc.nextInt();
                int b=sc.nextInt();
                a = sumOfDigits(a);
                b = sumOfDigits(b);
                if(a>b){ ca++; }
                else if(a==b){ ca++; mb++; }
                else{ mb++; }
            }
            if(ca>mb){
                System.out.println("0 "+ca);
            }
            else if(mb>ca){
                System.out.println("1 "+mb);
            }
            else{
                System.out.println("2 "+ca);
            }
        }
    }
}
