import java.util.*;
import java.lang.*;
import java.io.*;
class test1350 {
    public static void main(String[] args) throws java.lang.Exception {

        Scanner n=new Scanner(System.in);
        int t=n.nextInt();
        while(t-->0){
           int U=n.nextInt();
           int V=n.nextInt();
           int A=n.nextInt();
           int S=n.nextInt();
           long minVelocitySquared = (long)U * U - 2L * A * S;
           if(U<=V) System.out.println("Yes");
          
           else if ((long)V * V >= minVelocitySquared) {
            System.out.println("Yes");
       }
           else System.out.println("No");

        }
        n.close();
    }
}
