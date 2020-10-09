
import java.util.*;


class Codechef {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();               
        for(int h=0; h<t; h++){
            int k=sc.nextInt();            
            if(k<8){
                for(int i=1; i<=8; i++){
                    for(int j=1; j<=8; j++){
                        if(i==1 && j==1){
                            System.out.print("O");
                        }
                        else if((i==2 && j<=k+1) || i==1 && j==k+1 ){
                            System.out.print("X");
                        }
                        else{
                            System.out.print(".");
                        }
                    }
                    System.out.println();
                }
            }
            else if(k%8!=0){
                int temp = k/8;
                temp++;
                int temp1 = k%8;
                for(int i=1; i<=8; i++){
                    for(int j=1; j<=8; j++){
                        if(i==1 && j==1){
                            System.out.print("O");                            
                        }
                        else if( (i==temp+1 && j<=temp1+1) || (i==temp && j>temp1) ){
                            System.out.print("X");
                        }
                        else{
                            System.out.print(".");
                        }
                    }
                    System.out.println();
                }
            }
            else{
                    int temp2 = k/8;
                    for(int i=1; i<=8; i++){
                        for(int j=1; j<=8; j++){
                            if(i==1 && j==1){
                                System.out.print("O");
                            }
                            else if(i==temp2+1){
                                System.out.print("X");
                            }
                            else{
                                System.out.print(".");
                            }
                        }
                        System.out.println();
                    }
                
            }
        }
    }
}
