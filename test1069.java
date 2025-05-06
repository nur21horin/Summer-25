import java.lang.*;
import java.util.*;

class test1069
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
	
		Scanner n=new Scanner(System.in);
		int t=n.nextInt();
		//n.close();
		while(t-->0){
		    
		    int s=n.nextInt();
		    int a=n.nextInt();
		    int b=n.nextInt();
		    int c=n.nextInt();
			//n.close();
			float store=((float)s*(float)c)/100;
			float ans=s+store;
			//System.out.println(store);
			if(ans>=a && ans<=b) System.out.println("Yes");
			else System.out.println("No");
		    
		}
	}
}
